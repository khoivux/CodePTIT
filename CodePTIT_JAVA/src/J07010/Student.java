package J07010;

import java.text.ParseException;
import java.text.SimpleDateFormat;

public class Student {
	private static int cnt = 0;
	private String id;
	private String name;
	private String clas;
	private String birthDay;
	private Double gpa;
	public Student(String name, String clas, String birthDay, Double gpa) throws ParseException {
		super();
		cnt++;
		this.id = "B20DCCN" + String.format("%03d", cnt);
		this.name = name;
		this.clas = clas;
		SimpleDateFormat sdf = new SimpleDateFormat("dd/mm/yyyy");
		this.birthDay = sdf.format(sdf.parse(birthDay));
		this.gpa = gpa;
	}
	
	public String toString() {
		return id + " " + name + " " + clas + " " + birthDay + " " + String.format("%.2f", gpa);
	}
}
