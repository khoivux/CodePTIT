package J04009;

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-- > 0) {
			Point a = new Point(sc.nextDouble(), sc.nextDouble());
			Point b = new Point(sc.nextDouble(), sc.nextDouble());
			Point c = new Point(sc.nextDouble(), sc.nextDouble());
			if(Point.validTriangle(a, b, c)) {
				System.out.println(String.format("%.2f", Point.triangleArea(a, b, c)));
			}
			else {
				System.out.println("INVALID");
			}
		}
	}
}
