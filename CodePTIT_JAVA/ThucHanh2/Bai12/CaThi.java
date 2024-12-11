package ThucHanh2.Bai12;

import java.sql.Time;
import java.text.SimpleDateFormat;
import java.util.Date;

public class CaThi {
	private String ma, phong;
	private Date ngay;
	private Time gio;
	public CaThi(String ma, Date ngay, Time gio, String phong) {
		super();
		this.ma = ma;
		this.ngay = ngay;
		this.gio = gio;
		this.phong = phong;
	}
	
	public String getMa() {
		return ma;
	}

	public String getPhong() {
		return phong;
	}

	public Date getNgay() {
		return ngay;
	}

	public void setNgay(Date ngay) {
		this.ngay = ngay;
	}

	public Time getGio() {
		return gio;
	}

	public void setGio(Time gio) {
		this.gio = gio;
	}

	public String toString() {
		SimpleDateFormat dateFormat = new SimpleDateFormat("dd/MM/yyyy");
		SimpleDateFormat timeFormat = new SimpleDateFormat("HH:mm");
		return dateFormat.format(ngay) + " " + timeFormat.format(gio) + " " + phong;
	}
}
