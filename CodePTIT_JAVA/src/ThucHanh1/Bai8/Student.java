package ThucHanh1.Bai8;

public class Student implements Comparable<Student>{
	private String id;
	private String name;
	private String clas;
	private String email;
	private String phone;
	public Student(String id, String name, String clas, String email, String phone) {
		super();
		this.id = id;
		this.name = name;
		this.clas = clas;
		this.email = email;
		this.phone = "0" + phone;
	}
	public String toString() {
		return id + " " + name + " " + clas + " " + email + " " + phone;
	}
	@Override
	public int compareTo(Student a) {
		if(clas.equals(a.clas)) {
			return id.compareTo(a.id);
		} 
		else 
			return clas.compareTo(a.clas);
	}
}
