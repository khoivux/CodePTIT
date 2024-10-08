package J05006;

public class Staff {
	private String id, name, gender, birthDay, address, taxId, signDate;


	public Staff(String id, String name, String gender, String birthDay, String address, String taxId,
			String signDate) {
		super();
		this.id = id;
		this.name = name;
		this.gender = gender;
		this.birthDay = birthDay;
		this.address = address;
		this.taxId = taxId;
		this.signDate = signDate;
	}


	public String toString() {
		return id + " " + name + " " + gender + " " + birthDay + " " + address
				+ " " + taxId + " " + signDate;
	}	 
}
