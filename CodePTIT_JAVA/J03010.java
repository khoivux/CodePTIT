import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class J03010 {
	
	public static String email(String s) {
		s = s.toLowerCase();
		String a[] = s.split("\\s+");
		StringBuilder res = new StringBuilder("");
		res.append(a[a.length - 1]);
		for(int i = 0; i < a.length - 1; i++) {
			res.append(a[i].charAt(0) + "");
		}
		return res.toString();
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		sc.nextLine();
		Map<String, Integer> map = new HashMap<>();
		while(t-- > 0) {
			String s = sc.nextLine();
			String mail = email(s.trim());
			if(!map.containsKey(mail)) {
				map.put(mail, 1);
				System.out.println(mail + "@ptit.edu.vn");
			}
			else {
				map.put(mail, map.get(mail) + 1);
				System.out.println(mail + map.get(mail) + "@ptit.edu.vn");
			}
		}
	}
}
