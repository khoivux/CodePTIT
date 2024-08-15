import java.util.Scanner;

public class J01018 {
	public static boolean isTrue(long n) {
		long sum = 0;
		long prev = n % 10;
		sum += prev;
		boolean check = true;
		n /= 10;
		while(n != 0) {
			long tmp = n % 10;
			if(Math.abs(prev - tmp) != 2) {
				check = false;
				break;
			}
			sum += tmp;
			prev = tmp;
			n /= 10;
		}
		if(sum % 10 != 0) check = false;
		return check;
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
