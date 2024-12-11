package ThucHanh1.Bai12;

public class Student {
	private String id, name, phone, email;

	public Student(String id, String name, String phone, String email) {
		super();
		this.id = id;
		this.name = name;
		this.phone = phone;
		this.email = email;
	}
	
	public String getId() {
		return id;
	}

	public String toString() {
		return id + " " + name + " " + phone + " " + email;
	}
}
