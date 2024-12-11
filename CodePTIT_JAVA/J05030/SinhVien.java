package J05030;

public class SinhVien implements Comparable<SinhVien> {
	private String ma, ten, lop;
	private double diem1, diem2, diem3;
	
	
	public SinhVien(String ma, String ten, String lop, double diem1, double diem2, double diem3) {
		super();
		this.ma = ma;
		this.ten = ten;
		this.lop = lop;
		this.diem1 = diem1;
		this.diem2 = diem2;
		this.diem3 = diem3;
	}

	public String toString() {
		return ma + " " + ten + " " + lop + String.format(" %.1f", diem1) + String.format(" %.1f", diem2) + String.format(" %.1f", diem3);
	}
	
	@Override
	public int compareTo(SinhVien arg0) {
		// TODO Auto-generated method stub
		return this.ma.compareTo(arg0.ma);
	}

}
