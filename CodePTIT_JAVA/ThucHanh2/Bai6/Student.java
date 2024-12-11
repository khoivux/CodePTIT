package ThucHanh2.Bai6;

public class Student implements Comparable<Student>{
	private String name;
	private int ac, submit;
	public Student(String name, int ac, int submit) {
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
			else return (submit - o.submit);
		}
		else return (o.ac - ac);
	}
}
