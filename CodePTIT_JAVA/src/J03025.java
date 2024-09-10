import java.util.Scanner;

public class J03025 {
	
	public static boolean valid(String s) {
		StringBuilder tmp = new StringBuilder(s);
		String reverse = (tmp.reverse()).toString();
		int cnt = 0;
		for(int i = 0; i < s.length(); i++) {
			if(s.charAt(i) != tmp.charAt(i)) {
				cnt++;
			}
		}
		if(cnt == 2 || cnt == 0) 
			return true;
		else 
			return false;
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
