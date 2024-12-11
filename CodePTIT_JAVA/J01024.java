import java.util.Scanner;

public class J01024 {
	public static boolean isTrue(int n) {
		while(n != 0) {
			int x = n % 10;
			if(x != 0 && x != 1 && x != 2)
				return false;
			n /= 10;
		}
		return true;
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-- > 0) {
			int n = sc.nextInt();
			if(isTrue(n)) {
				System.out.println("YES");
			} else {
				System.out.println("NO");
			}
		}
	}
}
