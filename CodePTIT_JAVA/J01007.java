import java.util.Scanner;

public class J01007 {
	public static boolean isFibo(Long f[], Long n) {
		for(int i = 1; i <= 92; i++) {
			if(f[i] == n) return true;
		}
		return false;
	}
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
			Long n = sc.nextLong();
			if(isFibo(f, n)) {
				System.out.println("YES");
			} else {
				System.out.println("NO");
			}
		}
	}
}
