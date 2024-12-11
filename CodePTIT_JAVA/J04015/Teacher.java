package J04015;

public class Teacher {
	private String id;
	private String name;
	private Long basicSalary;
	public Teacher(String id, String name, Long basicSalary) {
		super();
		this.id = id;
		this.name = name;
		this.basicSalary = basicSalary;
	}
	public Long bonus() {
		StringBuilder teacherId = new StringBuilder(id);
		if(teacherId.substring(0, 2).equals("HT")) {
			return (long) 2000000;
		} 
		else if(teacherId.substring(0, 2).equals("HP")){
			return (long) 900000;
		}
		else {
			return (long) 500000;
		}
	}
	public Long coefSalary() {
		return Long.parseLong(new StringBuilder(id).substring(2));
	}
	public Long income() {
		return this.basicSalary * coefSalary() + bonus();
	}
	public String toString() {
		return id + " " + name + " " + coefSalary() + " " + bonus() + " " + income();
	}
}
