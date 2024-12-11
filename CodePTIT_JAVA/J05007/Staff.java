package J05007;

import java.text.SimpleDateFormat;
import java.util.Date;

public class Staff implements Comparable<Staff> {
	private String id, name, gender, address, taxId;
	private Date birthDay, signDate;

	public Staff(String id, String name, String gender, Date birthDay, String address, String taxId,
			Date signDate) {
		super();
		this.id = id;
		this.name = name;
		this.gender = gender;
		this.birthDay = birthDay;
		this.address = address;
		this.taxId = taxId;
		this.signDate = signDate;
	}
	public String formatDate(Date date) {
		SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
        return sdf.format(date);
	}
	public String toString() {
		return id + " " + name + " " + gender + " " + formatDate(birthDay) + " " + address
				+ " " + taxId + " " + formatDate(signDate);
	}

	@Override
	public int compareTo(Staff arg0) {
		return this.birthDay.compareTo(arg0.birthDay);
	}	 
}
