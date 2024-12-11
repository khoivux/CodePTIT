package J07057;

public class SinhVien implements Comparable<SinhVien>{
	private String ma, ten, dt;
	private float d;
	private int kv;

	public SinhVien(String ma, String ten, float d, String dt,  int kv) {
		super();
		this.ma = ma;
		this.ten = ten;
		this.dt = dt;
		this.d = d;
		this.kv = kv;
	}
	public float diem() {
		float diem = d;
		if(kv  ==  1) diem += 1.5;
		if(kv == 2) diem += 1;
		if(!dt.equals("Kinh")) diem += 1.5;
		return diem;
	}
	public String loai() {
		float d = diem();
		if(d >= 20.5) return "Do";
		else return "Truot";
	}
	public String toString() {
		return ma + " " + ten + " " + String.format("%.1f", diem()) + " " + loai();
	}
	@Override
	public int compareTo(SinhVien o) {
		if(o.diem() > this.diem()) return 1;
		else if(o.diem() < this.diem())return -1;
		else return this.ma.compareTo(o.ma);
	}
}
