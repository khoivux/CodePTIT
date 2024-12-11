package J07054;

public class SinhVien implements Comparable<SinhVien> {
	private String ma, ten;
	private double diem1, diem2, diem3;
	public SinhVien(String ma, String ten, double diem1, double diem2, double diem3) {
		super();
		this.ma =ma;
		this.ten = ten;
		this.diem1 = diem1;
		this.diem2 = diem2;
		this.diem3 = diem3;
	}
	public double trungBinh() {
	    double ketQua = ((diem1 * 3) + (diem2 * 3) + (diem3 * 2)) / 8;
	    return Math.round(ketQua * 100.0) / 100.0;
	}
	public String toString() {
		return ma + " " + ten + String.format(" %.2f", trungBinh());
	}
	@Override
	public int compareTo(SinhVien o) {
		if(o.trungBinh() == this.trungBinh()) {
			return this.ma.compareTo(o.ma);
		}
		else
		 return (int) (o.trungBinh() - this.trungBinh());
	}
}
