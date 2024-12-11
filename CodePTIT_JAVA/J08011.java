import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.Scanner;

public class J08011 {
	public static boolean valid(String s) {
		if(s.length() == 1) return true;
		for(int i = 1; i < s.length(); i++) {
			if(s.charAt(i) < s.charAt(i - 1)) {
				return false;
			}
		}
		return true;
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Map<String, Integer> map = new LinkedHashMap<>();
		int cnt = 0;
		while(sc.hasNext()) {
			//cnt++;
			String s = sc.next();
			if(valid(s)) {
				if(map.containsKey(s)) {
					map.put(s, map.get(s) + 1);
				}
				else {
					map.put(s, 1);
				}
			}
			//if(cnt == 35) break;
		}
		List<String> list = new ArrayList<>(map.keySet());
		Collections.sort(list, new Comparator<String>() {
            @Override
            public int compare(String e1, String e2) {
                return map.get(e2) - map.get(e1); 
            }
        });
		for(String s : list) {
			System.out.println(s + " " + map.get(s));
		}
	}
}
