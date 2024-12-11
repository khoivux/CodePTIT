package J05032;

import java.text.SimpleDateFormat;
import java.time.LocalDate;
import java.util.Date;

public class Nguoi implements Comparable<Nguoi>{
	private String ten;
	private Date ngaySinh;
	public Nguoi(String ten, Date ngaySinh) {
		super();
		this.ten = ten;
		this.ngaySinh = ngaySinh;
	}
	public String toString() {
		return ten;
	}
	@Override
	public int compareTo(Nguoi arg0) {
		if(this.ngaySinh.before(arg0.ngaySinh))
			return 1;
		else 
			return -1;
	}

}
