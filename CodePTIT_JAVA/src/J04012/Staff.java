package J04012;

public class Staff {
	private String id, name, position;
	private Integer workDay, salaryPerDay;
	public Staff(String id, String name,  Integer salaryPerDay, Integer workDay, String position) {
		super();
		this.id = id;
		this.name = name;
		this.position = position;
		this.workDay = workDay;
		this.salaryPerDay = salaryPerDay;
	}
	public Integer getSalary() {
		return this.workDay * this.salaryPerDay;
	}
	public Integer getBonus() {
		if(this.workDay >= 25) {
			return (int)(0.2 * this.getSalary());
		}
		else if(this.workDay >= 22 && this.workDay < 25) {
			return (int)(0.1 * this.getSalary());
		}
		else {
			return 0;
		}
	}
	public Integer getExtra() {
		if(this.position.equals("GD")) {
			return 250000;
		}
		else if(this.position.equals("PGD")) {
			return 200000;
		}
		else if(this.position.equals("TP")) {
			return 180000;
		}
		else {
			return 150000;
		}
	}
	public Integer getIncome() {
		return this.getSalary() + this.getBonus() + this.getExtra();
	}
	public String toString() {
		return id + " " + name + " " + this.getSalary() + " " + this.getBonus() 
			+ " " + this.getExtra() + " " + this.getIncome();
	}
}
