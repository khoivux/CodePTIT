import java.util.Scanner;

public class J01012 {
	public static Integer result(int n) {
		if(n % 2 == 1) return 0;
		int res = 0;
		for(int i = 1; i <= Math.sqrt(n); i++) {
			if(n % i == 0) {
				if(i % 2 == 0) res++;
				if(n / i % 2 == 0 && n / i != i) res++;
			}
		}
		return res;
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-- > 0) {
			int n = sc.nextInt();
			System.out.println(result(n));
		}
	}
}
