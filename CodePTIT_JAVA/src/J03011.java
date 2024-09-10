import java.math.BigInteger;
import java.util.Scanner;

public class J03011 {
	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
		int t = sc.nextInt();
		sc.nextLine();
		while(t-- > 0) {
			BigInteger a = new BigInteger(sc.nextLine());
			BigInteger b = new BigInteger(sc.nextLine());
			System.out.println(a.gcd(b));
		}
	}
}
