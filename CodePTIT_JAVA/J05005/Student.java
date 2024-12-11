package J05005;

import java.util.Date;

public class Student implements Comparable<Student>{
	public static int cnt = 0;
	private String id, name, clas;
	private String birthDay;
	private double gpa;
	public Student(String id, String name, String clas, String birthDay, double gpa) {
		cnt++;
		this.id = id + String.format("%03d", cnt);
		this.name = name;
		this.clas = clas;
		this.birthDay = birthDay;
		this.gpa = gpa;
	}
	public String toString() {
		return id + " " + name + " " + clas + " " + birthDay + String.format(" %.2f", gpa);
	}
	@Override
	public int compareTo(Student o) {
		if(this.gpa < o.gpa)
			return 1;
		else if(this.gpa > o.gpa)
			return -1;
		else 
			return 0;
	}
}
