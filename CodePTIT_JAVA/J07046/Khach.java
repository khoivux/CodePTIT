package J07046;

import java.time.LocalDate;
import java.time.temporal.ChronoUnit;

public class Khach implements Comparable<Khach>{
	private String ma, ten, maPhong;
	private LocalDate ngayDen, ngayDi;
	public Khach(String ma, String ten, String maPhong, LocalDate ngayDen, LocalDate ngayDi) {
		super();
		this.ma = ma;
		this.ten = ten;
		this.maPhong = maPhong;
		this.ngayDen = ngayDen;
		this.ngayDi = ngayDi;
	}
	public int soNgay() {
		return (int) ChronoUnit.DAYS.between(ngayDen, ngayDi);
	} 
	public String toString() {
		return ma + " " + ten + " " + maPhong + " " + soNgay();
	}
	@Override
	public int compareTo(Khach arg0) {
		return arg0.soNgay() - this.soNgay();
	}
}
