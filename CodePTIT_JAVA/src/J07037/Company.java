package J07037;

public class Company implements Comparable<Company>{
	private String id;
	private String name;
	private int capacity;
	public Company(String id, String name, int capacity) {
		super();
		this.id = id;
		this.name = name;
		this.capacity = capacity;
	}
	
	public String toString() {
		return id + " " + name + " " + capacity;
	}
	@Override
	public int compareTo(Company a) {
		return id.compareTo(a.id);
	}	
}
