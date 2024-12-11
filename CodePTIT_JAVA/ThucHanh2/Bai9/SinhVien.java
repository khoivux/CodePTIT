package ThucHanh2.Bai9;

public class SinhVien implements Comparable<SinhVien>{
	private String ma, ten, lop, email, sdt, gioiTinh, size;

	public SinhVien(String ma, String ten, String lop, String email, String sdt, String gioiTinh) {
		super();
		this.ma = ma;
		this.ten = ten;
		this.lop = lop;
		this.email = email;
		this.sdt = sdt;
		this.gioiTinh = gioiTinh;
	}
	public String getMa() {
		return ma;
	}
	public String getGioiTinh() {
		return gioiTinh;
	}
	public String getSize() {
		return size;
	}

	public void setSize(String size) {
		this.size = size;
	}
	@Override
	public int compareTo(SinhVien s) {
		return ma.compareTo(s.ma);
	}
	public String toString() {
		return ma + " " + ten + " " + lop + " " + email + " " + sdt;
	}

	
}
