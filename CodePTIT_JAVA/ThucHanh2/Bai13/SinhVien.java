package ThucHanh2.Bai13;

public class SinhVien {
	private String ma, ten, sdt, email;

	public SinhVien(String ma, String ten, String sdt, String email) {
		super();
		this.ma = ma;
		this.ten = ten;
		this.sdt = sdt;
		this.email = email;
	}

	public String getMa() {
		return ma;
	}

	public String toString() {
		return ma + " " + ten;
	}
}
