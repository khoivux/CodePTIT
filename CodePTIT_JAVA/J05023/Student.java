package J05023;

public class Student {
	private String id, fullName, clas, email;

	public Student(String id, String fullName, String clas, String email) {
		super();
		this.id = id;
		this.fullName = fullName;
		this.clas = clas;
		this.email = email;
	}
	public String getKhoa() {
		StringBuilder lop = new StringBuilder(this.clas);
		return lop.substring(1, 3).toString();
	}
	public String toString() {
		return id + " " + fullName + " " + clas + " " + email;
	}
}
