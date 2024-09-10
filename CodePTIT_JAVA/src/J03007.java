import java.util.Scanner;

public class J03007 {
	public static boolean valid(String s) {
		StringBuilder tmp = new StringBuilder(s);
		if(!s.equals(tmp.reverse().toString())) {
			return false;
		}
		if(s.charAt(0) != '8' || s.charAt(s.length() - 1) != '8') {
			return false;
		}
		int sum = 0;
		for(int i = 0; i < s.length(); i++) {
			int x = s.charAt(i) - '0';
			sum += x;
		}
		if(sum % 10 != 0) 
			return false;
		return true;
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		sc.nextLine();
		while(t-- > 0) {
			String s = sc.nextLine();
			if(valid(s)) {
				System.out.println("YES");
			}
			else {
				System.out.println("NO");
			}
		}
	}
}
