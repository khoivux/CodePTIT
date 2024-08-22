import java.util.Scanner;

public class J02106 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int cnt = 0;
		for(int i = 1; i <= n; i++) {
			int s = 0;
			for(int j = 1; j <= 3; j++) {
				s += sc.nextInt();
			}
			if(s >= 2) {
				cnt++;
			}
		}
		System.out.println(cnt);
	}
}
