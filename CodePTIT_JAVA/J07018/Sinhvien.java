package J07018;

import java.text.SimpleDateFormat;
import java.util.Date;

public class Sinhvien {
	private String ma, ten, lop;
	private Date ngay;
	private float gpa;
	public Sinhvien(String ma, String ten, String lop, Date ngay, float gpa) {
		super();
		this.ma = ma;
		this.ten = ten;
		this.lop = lop;
		this.ngay = ngay;
		this.gpa = gpa;
	}
	public String toString() {
		SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
		return ma + " " + ten + " " + lop + " " + sdf.format(ngay) + " " + String.format("%.2f", gpa);
 	}
}
