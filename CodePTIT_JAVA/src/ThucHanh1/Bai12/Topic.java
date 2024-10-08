package ThucHanh1.Bai12;

public class Topic {
	private static Integer cnt = 0;
	private String teacherName, name, id;
	public Topic(String teacherName, String name) {
		super();
		this.id = String.format("DT%03d", ++cnt);
		this.teacherName = teacherName;
		this.name = name;
	}
	public String getId() {
		return id;
	}
	public String getName() {
		return name;
	}
	public String toString() {
		return teacherName + " " + name;
	}
}
