package ThucHanh1.Bai9;

public class Student implements Comparable<Student>{
	private String name;
	private long ac, submit;
	public Student(String name, long ac, long submit) {
		super();
		this.name = name;
		this.ac = ac;
		this.submit = submit;
	}
	public String toString() {
		return name + " " + ac + " " + submit;
	}
	@Override
	public int compareTo(Student o) {
		if(ac == o.ac) {
			if(submit == o.submit) {
				return name.compareTo(o.name);
			}
			else return (int) (submit - o.submit);
		}
		else return (int) (o.ac - ac);
	}
}
