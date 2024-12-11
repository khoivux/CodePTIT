package J05047;

public class SanPham implements Comparable<SanPham>{
	private String ma, ten;
	private long soLuong, donGia;
	public SanPham(String ma, String ten, long soLuong, long donGia) {
		super();
		this.ma = ma;
		this.ten = ten;
		this.soLuong = soLuong;
		this.donGia = donGia;
	}
	public double chietKhau() {
		if(soLuong > 10) return 0.05;
		else if(soLuong >= 8) return 0.02;
		else if(soLuong >= 5) return 0.01;
		else return 0;
	}
	public long tienChietKhau() {
		return (long) (donGia * soLuong * chietKhau());
	}
	public long thanhTien() {
		return (long) (donGia * soLuong * (1 - chietKhau()));
	}
	public String toString() {
		return ma + " " + ten + " " + tienChietKhau() + " " + thanhTien();
	}
	@Override
	public int compareTo(SanPham a) {
		return (int) (a.tienChietKhau() - this.tienChietKhau());
	}
}
