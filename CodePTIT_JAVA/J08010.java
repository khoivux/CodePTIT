import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Scanner;

public class J08010 {
	public static boolean reversed(String s) {
		StringBuilder sb = new StringBuilder(s);
		String tmp = sb.reverse().toString();
		if(s.equals(tmp)) return true;
		else return false;
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Map<String, Integer> map = new LinkedHashMap<>();
		int max = 0;
		while(sc.hasNext()) {
			String s = sc.next();
			if(reversed(s)) {
				if(map.containsKey(s)) {
					map.put(s, map.get(s) + 1);
				}
				else {
					map.put(s, 1);
				}
				if(s.length() >= max) {
					max = s.length();
				}
			}
		}
		for(Map.Entry<String, Integer> en : map.entrySet()) {
			if(en.getKey().length() == max) {
				System.out.println(en.getKey() + " " + en.getValue());
			}
		}
	}
}
