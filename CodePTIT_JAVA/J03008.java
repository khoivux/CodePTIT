import java.util.Scanner;

public class J03008 {
	public static boolean valid(String s) {
		StringBuilder tmp = new StringBuilder(s);
		if(!s.equals(tmp.reverse().toString())) {
			return false;
		}
		for(int i = 0; i < s.length(); i++) {
			int x = s.charAt(i) - '0';
			if(x != 2 && x != 3 && x != 5 && x!= 7) {
				return false;
			}
		}
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
