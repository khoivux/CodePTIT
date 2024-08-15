import java.util.Scanner;

public class J01006 {
	public static void main(String[] args) {
		Long f[] = new Long[100];
		f[0] = (long) 0;
		f[1] = (long) 1;
		f[2] = (long) 2;
		for(int i = 3; i <= 92; i++) {
			f[i] = f[i - 1] + f[i - 2];
		}
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-- > 0) {
			int n = sc.nextInt();
			System.out.println(f[n - 1]);
		}
	}
}
