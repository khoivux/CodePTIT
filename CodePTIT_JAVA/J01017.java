import java.util.Scanner;

public class J01017 {
	
	public static boolean isTrue(long n) {
		long prev = n % 10;
		n /= 10;
		while(n != 0) {
			long tmp = n % 10;
			if(Math.abs(prev - tmp) != 1) {
				return false;
			}
			prev = tmp;
			n /= 10;
		}
		return true;
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-- > 0) {
			long n = sc.nextLong();
			if(isTrue(n)) {
				System.out.println("YES");
			} else {
				System.out.println("NO");
			}
		}
	}
}
