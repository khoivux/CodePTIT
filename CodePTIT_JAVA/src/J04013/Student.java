package J04013;

public class Student {
	private String id, name;
	private double math, phys, chem;
	public Student(String id, String name, double math, double phys, double chem) {
		super();
		this.id = id;
		this.name = name;
		this.math = math;
		this.phys = phys;
		this.chem = chem;
	}
	public double priorityPoint() {
		Character c = this.id.charAt(2);
		if(c == '1') 
			return 0.5;
		else if(c == '2')
			return 1.0;
		else 
			return 2.5;
	}
	public double getPoint() {
		return math * 2 + phys + chem;
	}
	public String getStatus() {
		if(this.getPoint() + priorityPoint() >= 24)
			return "TRUNG TUYEN";
		else 
			return "TRUOT";
	}
	public String formatPoint(double point) {
		if(point == (int) point) 
			return (int)point + "";
		else 
			return String.format("%.1f", point);
	}
	public String toString() {
		return id + " " + name + " " + formatPoint(priorityPoint()) + " "
				+ formatPoint(getPoint()) + " " + getStatus();
	}
}
