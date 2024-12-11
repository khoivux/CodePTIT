package J04001;

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-- > 0) {
			Point a = new Point(sc.nextDouble(), sc.nextDouble());
			Point b = new Point(sc.nextDouble(), sc.nextDouble());
			System.out.println(String.format("%.4f", Point.distance(a, b)));
		}
	}
}
