package J04006;

public class Student {
	private String id;
	private String name;
	private String clas;
	private String birthday;
	private double gpa;
	public Student() {
		this.gpa = 0;
	}
	public Student(String id, String name, String clas, String birthday, double gpa) {
		super();
		this.id = id;
		this.name = name;
		this.clas = clas;
		this.birthday = birthday;
		this.gpa = gpa;
	}
	public void setId(String id) {
		this.id = id;
	}
	public void setName(String name) {
		this.name = name;
	}
	public void setClas(String clas) {
		this.clas = clas;
	}
	public void setBirthday(String birthday) {
		this.birthday = birthday;
	}
	public void setGpa(double gpa) {
		this.gpa = gpa;
	}
	public void convertBirthDay(){
		StringBuilder birth = new StringBuilder(this.birthday);
		if(birth.charAt(2) != '/') birth.insert(0, '0');
		if(birth.charAt(5) != '/') birth.insert(3, '0');
		this.birthday = birth.toString();
	}
	public String toString() {
		return String.format(id + " " + name + " " + clas + " " + birthday + " %.2f", gpa);
	}
}
