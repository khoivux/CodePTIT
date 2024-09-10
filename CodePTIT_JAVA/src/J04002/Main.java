package J04002;

import java.util.Scanner;

public class Main {
	
	public static boolean valid(double a, double b) {
		int x = (int) a;
		int y = (int) b;
		if(x != a || y != b || a <= 0 || b <= 0) {
			return false;
		}
		return true;
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Rectange r = new Rectange(Double.parseDouble(sc.next()), Double.parseDouble(sc.next()), sc.next());
		if(valid(r.getWidth(), r.getHeight())) {
			System.out.printf("%d %d " + r.getColor(), (int)r.findPerimeter(), (int)r.findArea());
		}
		else {
			System.out.println("INVALID");
		}
	}
}
