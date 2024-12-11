package J04008;

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
	@Override
	public String toString() {
		return "Point [x=" + x + ", y=" + y + "]";
	}
}
