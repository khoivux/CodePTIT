import java.util.Scanner;

public class J01003 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Double a = sc.nextDouble(), b = sc.nextDouble();
		if(a == 0) {
			if(b == 0) {
				System.out.println("VSN");
			} else if(b != 0) {
				System.out.println("VN");
			}
		} else {
			Double x = -b / a;
			System.out.println(String.format("%.2f", x));
		}
	}
}
