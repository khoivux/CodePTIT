package J05040;

public class NhanVien {
	private String ma, ten, chucVu;
	private int luong, ngayCong;
	public NhanVien(String ma, String ten, int luong, int ngayCong, String chucVu) {
		super();
		this.ma = ma;
		this.ten = ten;
		this.chucVu = chucVu;
		this.luong = luong;
		this.ngayCong = ngayCong;
	}
	public int phuCap() {
		if(chucVu.equals("GD"))
			return 250000;
		else if(chucVu.equals("PGD"))
			return 200000;
		else if(chucVu.equals("TP"))
			return 180000;
		else 
			return 150000;
	}
	public double thuong() {
		if(ngayCong >= 25)
			return 0.2;
		else if(ngayCong >= 22)
			return 0.1;
		else return 0;
	}
	public int luongThang() {
		return luong * ngayCong;
	}
	public int thucLinh() {
		return (int)(luongThang() * (1 + thuong())) + phuCap();
	}
	public String toString() {
		return ma + " " + ten + " " + 
				luongThang() + " " + (int)(luongThang() * thuong()) + " " + phuCap() + " " + thucLinh();
	}
}
