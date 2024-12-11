package J07048;

public class SanPham implements Comparable<SanPham>{
	private String ma, ten;
	private int gia, bh;
	public SanPham(String ma, String ten, int gia, int bh) {
		super();
		this.ma = ma;
		this.ten = ten;
		this.gia = gia;
		this.bh = bh;
	}
	@Override
	public int compareTo(SanPham o) {
		if(gia == o.gia) {
			return ma.compareTo(o.ma);
		}
		else return o.gia - gia;
	}
	public String toString() {
		return ma + " " + ten + " " + gia + " " + bh;
	}
	
}
