package J04019;

import java.util.Scanner;

public class Point {
	private double x, y;
	
	public Point(double x, double y) {
		super();
		this.x = x;
		this.y = y;
	}

	public double distance(Point other) {
		 double dx = this.x - other.x;
	     double dy = this.y - other.y;
	     return Math.sqrt(dx * dx + dy * dy);
	}
	public static Point nextPoint(Scanner sc) {
		return new Point(sc.nextDouble(), sc.nextDouble());
	}
}
