package J05022;

public class Student {
	private String id, fullName, clas, email;

	public Student(String id, String fullName, String clas, String email) {
		super();
		this.id = id;
		this.fullName = fullName;
		this.clas = clas;
		this.email = email;
	}
	public String getClas() {
		return this.clas;
	}
	public String toString() {
		return id + " " + fullName + " " + clas + " " + email;
	}
}
