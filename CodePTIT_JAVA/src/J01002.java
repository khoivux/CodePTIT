import java.util.Scanner;

public class J01002 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Integer t = sc.nextInt();
		while(t-- > 0) {
			Long n = sc.nextLong();
			System.out.println((n + 1) * n / 2);
		}
	}
}
