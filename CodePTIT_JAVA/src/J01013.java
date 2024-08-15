import java.util.Scanner;

public class J01013 {
	static int p[] = new int[2000001]; 
	
	public static void makePrime() {
		for (int i = 2; i  <= Math.sqrt(2 * 1e6); i++) {
			if(p[i] == 0) {
				for(int j = i * i; j <= 2000000; j += i) {
					p[j] = i;
				}
			}
		}
		for(int i = 2; i <= 2000000; i++) {
			if(p[i] == 0) {
				p[i] = i;
			}
		}
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		makePrime();
		Long res = (long) 0;
		while(t-- > 0) {
			int n = sc.nextInt();
			while(n != 1) {
				res += p[n];
				n /= p[n];
			}
		}
		System.out.println(res);
	}
}
