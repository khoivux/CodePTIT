import java.util.Scanner;

public class J01026 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-- > 0) {
			double n = sc.nextDouble();
			int sqr = (int) Math.sqrt(n);
			if(sqr * sqr == n) {
				System.out.println("YES");
			}
			else {
				System.out.println("NO");
			}
		}
	}
}
