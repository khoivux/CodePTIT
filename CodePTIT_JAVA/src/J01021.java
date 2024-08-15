import java.util.Scanner;

public class J01021 {
	static long mod = (long) (1e9 + 7);
	
	public static long result(long a, long b) {
		if(b == 0) return 1;
		long x = result(a, b / 2) % mod;
		if(b % 2 == 0) {
			return (x * x) % mod;
		} 
		else {
			return (x * x) % mod * a % mod;
		}
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		while(true) {
			long a = sc.nextLong(), b = sc.nextLong();
			if(a == 0 && b == 0) break;
			System.out.println(result(a, b));
		}
	}
}
