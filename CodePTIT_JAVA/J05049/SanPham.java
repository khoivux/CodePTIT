package J05049;

public class SanPham implements Comparable<SanPham>{
	private String ma;
	private int nhap;
	
	public SanPham(String ma, int nhap) {
		super();
		this.ma = ma;
		this.nhap = nhap;
	}
	public int xuat() {
		if(ma.startsWith("A"))
			return (int) Math.round(0.6 * nhap);
		else 
			return (int) Math.round(0.7 * nhap);
	}
	public int donGia() {
		if(ma.endsWith("Y"))
			return 110000;
		else
			return 135000;
	}
	public int tien() {
		return donGia() * xuat();
	}
	public int thue() {
		if(ma.startsWith("A")) {
			if(ma.endsWith("Y"))
				return (int) Math.round(0.08 * tien());
			else
				return (int) Math.round(0.11 * tien());
		}
		else {
			if(ma.endsWith("Y"))
				return (int) Math.round(0.17 * tien());
			else
				return (int) Math.round(0.22 * tien());
		}
	}
	
	public String getMa() {
		return ma;
	}
	public String toString() {
		return ma + " " + nhap + " " + xuat() + " " + donGia() + " " + tien() + " " + thue();
	}
	@Override
	public int compareTo(SanPham o) {
		return o.thue() - this.thue();
	}
}
