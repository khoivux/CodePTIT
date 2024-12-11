package J05043;

public class NhanVien {
	private String ma, ten, cv;
	private int luong;
	private int cong;
	public NhanVien(String ma, String ten, String cv, int luong, int cong) {
		super();
		this.ma = ma;
		this.ten = ten;
		this.cv = cv;
		this.luong = luong;
		this.cong = cong;
	}
	public int phu() {
		if(cv.equals("GD")) return 500;
		else if(cv.equals("PGD")) return 400;
		else if(cv.equals("TP")) return 300;
		else if(cv.equals("KT")) return 250;
		else return 100;
	}
	public int luongC() {
		return luong * cong;
	}
	public int ung() {
		if(1.0 * (phu() + luongC()) * 2/ 3 >= 25000) return 25000;
		else return  (int) (Math.round(1.0 * (phu() + luongC()) * 2/3 / 1000.0) * 1000.0);
	}
	public String toString() {
		return ma + " " + ten + " " + phu() + " " + luongC() + " " + ung() + " " + (luongC() + phu() - ung());
	}
}
