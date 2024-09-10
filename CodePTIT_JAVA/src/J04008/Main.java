package J04008;

import java.util.Scanner;

import J04008.Point;

public class Main {
	public static boolean valid(double a, double b, double c) {
		if(a + b <= c || b + c <= a || c + a <= b) {
			return false;
		}
		return true;
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-- > 0) {
			Point a = new Point(sc.nextDouble(), sc.nextDouble());
			Point b = new Point(sc.nextDouble(), sc.nextDouble());
			Point c = new Point(sc.nextDouble(), sc.nextDouble());
			double ab = a.distance(b);
			double bc = b.distance(c);
			double ca = c.distance(a);
			if(valid(ab, bc, ca)) {
				System.out.println(String.format("%.3f", ab + bc + ca));
			}
			else {
				System.out.println("INVALID");
			}
		}
	}
}
