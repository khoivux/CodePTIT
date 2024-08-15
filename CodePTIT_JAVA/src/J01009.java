import java.util.Scanner;

public class J01009 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		Long res = (long) 0;
		Long gt = (long) 1;
		for(int i = 1; i <= n; i++) {
			gt = gt * i;
			res += gt;
		}
		System.out.println(res);
	}
}
