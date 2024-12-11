package J05024;

public class Student {
	private String id, fullName, clas, email;

	public Student(String id, String fullName, String clas, String email) {
		super();
		this.id = id;
		this.fullName = fullName;
		this.clas = clas;
		this.email = email;
	}
	
	public String getId() {
		return id;
	}

	
	public String getClas() {
		return clas;
	}

	public String toString() {
		return id + " " + fullName + " " + clas + " " + email;
	}
}
