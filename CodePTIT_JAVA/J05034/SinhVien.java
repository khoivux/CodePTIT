package J05034;

public class SinhVien implements Comparable<SinhVien>{
	private int stt;
	private String ma, ten, lop, email, doanhNghiep;
	public SinhVien(int stt, String ma, String ten, String lop, String email, String doanhNghiep) {
		super();
		this.stt = stt;
		this.ma = ma;
		this.ten = ten;
		this.lop = lop;
		this.email = email;
		this.doanhNghiep = doanhNghiep;
	}
	public String toString() {
		return stt + " " + ma + " " + ten + " " + lop + " " + email + " " + doanhNghiep;  
	}
	
	public String getDoanhNghiep() {
		return doanhNghiep;
	}
	@Override
	public int compareTo(SinhVien o) {
		return this.ten.compareTo(o.ten);
	}
}
