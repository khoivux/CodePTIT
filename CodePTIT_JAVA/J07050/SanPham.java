package J07050;

public class SanPham implements Comparable<SanPham>{
	private String ma, ten, nhom;
	private double mua, ban;
	public SanPham(String ma, String ten, String nhom, double mua, double ban) {
		super();
		this.ma = ma;
		this.ten = ten;
		this.nhom = nhom;
		this.mua = mua;
		this.ban = ban;
	}
	public double loi() {
		return ban - mua;
	}
	public String toString() {
		return ma + " " + ten + " " + nhom + " " + String.format("% .2f", loi());
	}
	@Override
	public int compareTo(SanPham o) {
		return (int) (o.loi() - loi());
	}
}
