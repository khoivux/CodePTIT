package J05009;

public class Student {
	private String id, name, bd;
	private double p1, p2, p3;
	public Student(String id, String name, String bd, double p1, double p2, double p3) {
		super();
		this.id = id;
		this.name = name;
		this.bd = bd;
		this.p1 = p1;
		this.p2 = p2;
		this.p3 = p3;
	}
	public double totalPoint() {
		return p1 + p2 + p3;
	}
	public String toString() {
		return id + " " + name + " " + bd + String.format(" %.1f", totalPoint());
	}
}
