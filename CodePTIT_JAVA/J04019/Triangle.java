package J04019;

public class Triangle {
	private Point a, b, c;

	public Triangle(Point a, Point b, Point c) {
		super();
		this.a = a;
		this.b = b;
		this.c = c;
	}
	public boolean valid() {
		double ab = a.distance(b);
		double bc = b.distance(c);
		double ca = c.distance(a);
		if(ab + bc <= ca || bc + ca <= ab || ca + ab <= bc) {
			return false;
		}
		return true;
	}
	public String getPerimeter() {
		double ab = a.distance(b);
		double bc = b.distance(c);
		double ca = c.distance(a);
		return String.format("%.3f", ab + bc + ca);
	}
}
