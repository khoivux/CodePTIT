import java.util.Scanner;

public class J01004 {
	public static boolean isPrime(Long n) {
		for(int i = 2; i <= Math.sqrt(n); i++) {
			if(n % i == 0) {
				return false;
			}
		}
		return n > 2;
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Integer t = sc.nextInt();
		while(t-- > 0) {
			Long n = sc.nextLong();
			if(isPrime(n)) {
				System.out.println("YES");
			} else {
				System.out.println("NO");
			}
		}
	}
}
