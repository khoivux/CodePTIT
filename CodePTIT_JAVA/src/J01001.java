import java.util.Scanner;

public class J01001 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Long a = sc.nextLong(), b = sc.nextLong();
		if(a <= 0 || b <= 0) {
			System.out.println(0);
		} else {
			System.out.println((a + b) * 2 + " " + a * b);
		}
	}
}
