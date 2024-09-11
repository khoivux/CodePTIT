package J04010;

public class Point {
	private double x, y;

	public Point() {
		
	}
	public Point(double x, double y) {
		this.x = x;
		this.y = y;
	}
	public Point(Point p) {
		this.x = p.getX();
		this.y = p.getY();
	}
	public double getX() {
		return x;
	}
	public double getY() {
		return y;
	}
	public double distance(Point other) {
		 double dx = this.x - other.getX();
	     double dy = this.y - other.getY();
	     return Math.sqrt(dx * dx + dy * dy);
	}
	public static double distance(Point a, Point b) {
		double dx = a.getX() - b.getX();
		double dy = a.getY() - b.getY();
		return Math.sqrt(dx * dx + dy * dy);
	}
	public static boolean validTriangle(Point a, Point b, Point c) {
		double ab = a.distance(b);
		double bc = b.distance(c);
		double ca = c.distance(a);
		if(ab + bc <= ca || bc + ca <= ab || ca + ab <= bc) {
			return false;
		}
		return true;
	}
	public static double triangleArea(Point a, Point b, Point c) {
		double ab = a.distance(b);
		double bc = b.distance(c);
		double ca = c.distance(a);
		return 0.25 * Math.sqrt((ab + bc + ca) * (ab + bc - ca)
								* (bc + ca - ab) * (ca + ab - bc));
	}
	public static double circleArea(Point a, Point b, Point c) {
		double ab = a.distance(b);
		double bc = b.distance(c);
		double ca = c.distance(a);
		double radius = (ab * bc * ca) / (4 * triangleArea(a, b, c));
		return Math.PI * radius * radius;
	}
}
