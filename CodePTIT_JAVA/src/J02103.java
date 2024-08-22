import java.util.Scanner;

public class J02103 {
	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
		int t = sc.nextInt();
		int test = 0;
		while(t-- > 0) {
			test++;
			int n = sc.nextInt(), m = sc.nextInt();
			int a[][] = new int[n + 1][m + 1];
			int b[][] = new int[m + 1][n + 1];
			for(int i = 1; i <= n; i++) {
				for(int j = 1; j <= n; j++) {
					a[i][j] = sc.nextInt();
					b[j][i] = a[i][j];
				}
			}
			System.out.printf("Test %d:\n", test);
			int  x = 0;
			for(int i = 1; i <= n; i++) {
				for(int j = 1; j <= n; j++) {
					x = 0;
					for(int k = 1; k <= m; k++) {
						x += a[i][k] * b[k][j];
					}
					System.out.printf("%d ", x);
				}
				System.out.println();
			}
		}
	}
}
