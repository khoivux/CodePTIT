package J05020;

public class Student implements Comparable<Student>{
	private String id;
	private String fullName;
	private String clas;
	private String email;
	
	public Student(String id, String fullName, String clas, String email) {
		this.id = id;
		this.fullName = fullName;
		this.clas = clas;
		this.email = email;
	}
	public String toString() { 
		return id + " " + fullName + " " + clas + " " + email;
	}
	@Override
	public int compareTo(Student o) {
		int cmp = this.clas.compareTo(o.clas);
		if(cmp == 0) {
			return this.id.compareTo(o.id);
		}
		return cmp;
	}
}
