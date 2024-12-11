package J04005;

public class Student {
	String name, date;
	Double point1, point2, point3, sum;
	public Student(String name, String date, Double point1, Double point2, Double point3) {
		super();
		this.name = name;
		this.date = date;
		this.point1 = point1;
		this.point2 = point2;
		this.point3 = point3;
		sum = point1 + point2 + point3;
	}
	public String toString() {
		return name + " " + date + String.format(" %.1f", sum);
	}
}
