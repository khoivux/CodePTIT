import java.util.Scanner;

public class J01008 {
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		int test = 0;
		while(t-- > 0) {
			
			int n = sc.nextInt();
			int cnt;
			System.out.print("Test " + (++test) + ": ");
			for(int i = 2; i <= Math.sqrt(n); i++) {
				if(n % i == 0) {
					cnt = 0;
					while(n % i == 0) {
						n /= i;
						cnt++;
					}
					if(cnt > 0) {
						System.out.printf("%d(%d) ", i, cnt);
					}	
				}
			}
			if(n > 1) {
				System.out.printf("%d(1)", n);
			}
			System.out.println();
		}
	}
}
