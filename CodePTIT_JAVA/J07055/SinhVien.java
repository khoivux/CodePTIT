package J07055;

public class SinhVien implements Comparable<SinhVien>{
	private String ma, ten;
	private float d1, d2, d3;
	
	
	public SinhVien(String ma, String ten, float d1, float d2, float d3) {
		super();
		this.ma = ma;
		this.ten = ten;
		this.d1 = d1;
		this.d2 = d2;
		this.d3 = d3;
	}
	public float tb() {
		float d = (float) (d1 * 0.25 + d2 * 0.35 + d3 * 0.4);
		return d;
	}
	public String loai() {
		float d = tb();
		
		if(d >= 8) return "GIOI";
		else if(d >= 6.5) return "KHA";
		else if(d >= 5) return "TRUNG BINH";
		else return "KEM";
	}
	public String toString() {
		return ma + " " + ten + " " + String.format("%.2f", tb()) + " " + loai();
	}
	@Override
	public int compareTo(SinhVien o) {
		if(o.tb() > this.tb()) return 1;
		else return -1;
	}
}
