package J04007;

public class Staff {
	private String id;
	private String fullName;
	private String gender;
	private String birthDay;
	private String address;
	private String taxId;
	private String signDate;
	public Staff(String id, String fullName, String gender, String birthDay, String address, String taxId,
			String signDate) {
		this.id = id;
		this.fullName = fullName;
		this.gender = gender;
		this.birthDay = birthDay;
		this.address = address;
		this.taxId = taxId;
		this.signDate = signDate;
	}
	public String toString() {
		return id + " " + fullName + " " + gender + " " + birthDay + " " + address + " " + taxId + " " + signDate;
	}
}
