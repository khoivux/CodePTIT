package RMI;

import java.rmi.registry.LocateRegistry;
import java.rmi.registry.Registry;
import java.util.HashMap;
import java.util.Map;

public class RMI_Character {
    public static void main(String[] args) throws Exception{
        Registry rg = LocateRegistry.getRegistry("203.162.10.109", 1099);
        CharacterService sv = (CharacterService) rg.lookup("RMICharacterService");
        String s = sv.requestCharacter("B22DCCN468", "btdJGwj5");
        System.out.println(s);

        Map<Character, Integer> mp = new HashMap<>();
        for(int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            mp.put(c, mp.getOrDefault(c, 0) + 1);
        }
        String res = "{";
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (mp.containsKey(c)) {
                res += "\"" + c + "\": " + mp.get(c) + ", ";
                mp.remove(c);
            }
        }
        if (res.endsWith(" ")) {
            res = res.substring(0, res.length() - 2);
        }
        res += "}";
        System.out.println(res);
        sv.submitCharacter("B22DCCN468", "btdJGwj5", res);
    }
}
