package J05018;

import java.util.ArrayList;

public class Student implements Comparable<Student>{
	private String id, name;
	private ArrayList<Double> listPoint = new ArrayList<>();
	public Student(String id, String name, ArrayList<Double> listPoint) {
		super();
		this.id = id;
		this.name = name;
		this.listPoint = listPoint;
	}
	public double average() {
		double res = 0;
		for(Double p : listPoint) {
			res += p;
		}
		res = res + listPoint.get(0) + listPoint.get(1);
		return res / 12;
	}
	public String rank() {
		double d = average();
		if(d >= 9) return "XUAT SAC";
		else if(d >= 8) return "GIOI";
		else if(d >= 7) return "KHA";
		else if(d >= 5) return "TB";
		else return "YEU";
	}
	public String toString() {
		return id + " " + name + String.format(" %.1f ", average()) + rank();
	}
	@Override
	public int compareTo(Student o) {
		if(this.average() == o.average()) {
			return this.id.compareTo(o.id);
		}
		else {
			if(this.average() > o.average())
				return -1;
			else return 1;
		}
	}
}
