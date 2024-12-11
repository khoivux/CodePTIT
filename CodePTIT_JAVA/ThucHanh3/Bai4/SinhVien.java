package ThucHanh3.Bai4;

public class SinhVien {
	private String ma, ten, bt;

	public SinhVien(String ma, String ten, String bt) {
		super();
		this.ma = ma;
		this.ten = ten;
		this.bt = bt;
	}

	public String getMa() {
		return ma;
	}

	public void setMa(String ma) {
		this.ma = ma;
	}
	public String toString() {
		return ma + " " + ten + " " + bt + " ";
	}
}
