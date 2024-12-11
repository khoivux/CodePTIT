import java.util.Scanner;

public class J01014 {
		
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-- > 0) {
			long n = sc.nextLong();
			long res = 0;
			for(long i = 2; i  <= Math.sqrt(n); i++) {
				if(n % i == 0) {
					res = i;
					while(n % i == 0) {
						n /= i;
					}
				}
			}
			if(n > 1) res = n;
			System.out.println(res);
		}
	}
}
