import java.util.Scanner;

public class J01010 {
	public static Long result(String s) {
		int n = s.length();
		Long res = (long) 0;
		for(int i = 0; i < n; i++) {
			if(s.charAt(i) == '1') {
				res = res * 10 + 1;
			} 
			else if(s.charAt(i) == '0' || s.charAt(i) == '8' || s.charAt(i) == '9') {
				res = res * 10;
			}
			else return (long) -1;
		}
		return res;	
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-- > 0) {
			String s = sc.next();
			if(result(s) == 0 || result(s) == -1) {
				System.out.println("INVALID");
			}
			else {
				System.out.println(result(s));
			}
		}
	}
}
