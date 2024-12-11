package J05028;

public class DoanhNghiep implements Comparable<DoanhNghiep>{
	private String ma, ten;
	private int soLuong;
	public DoanhNghiep(String ma, String ten, int soLuong) {
		super();
		this.ma = ma;
		this.ten = ten;
		this.soLuong = soLuong;
	}
	public String toString() {
		return ma + " " + ten + " " + soLuong;
	}
	@Override
	public int compareTo(DoanhNghiep arg0) {
		if(this.soLuong == arg0.soLuong) {
			return this.ma.compareTo(arg0.ma);
		}
		return arg0.soLuong - this.soLuong;
	}
	
}
