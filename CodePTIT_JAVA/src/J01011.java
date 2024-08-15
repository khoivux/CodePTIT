import java.util.Scanner;

public class J01011 {
	public static Integer gcd(int a, int b) {
		if(b == 0) {
			return a;
		}
		return gcd(b, a % b);
	}
	public static Long lcm(int a, int b) {
		return((long) a / gcd(a, b) * b);
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-- > 0) {
			int a = sc.nextInt(), b = sc.nextInt();
			System.out.println(lcm(a, b) + " " + gcd(a, b));
		}
	}
}
