package J07034;

public class Subject implements Comparable<Subject> {
	private String id, name;
	private int nums;
	public Subject(String id, String name, int nums) {
		super();
		this.id = id;
		this.name = name;
		this.nums = nums;
	}
	public String toString() {
		return id + " " + name + " " + nums;
	}
	@Override
	public int compareTo(Subject a) {
		return name.compareTo(a.name);
	}
}
