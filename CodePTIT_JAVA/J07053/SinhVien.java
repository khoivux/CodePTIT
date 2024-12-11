package J07053;

public class SinhVien {
	private String ma, ten, ns;
	private float d1, d2;
	
	public SinhVien(String ma, String ten, String ns, float d1, float d2) {
		super();
		this.ma = ma;
		this.ten = ten;
		this.ns = ns;
		this.d1 = d1;
		this.d2 = d2;
	}
	public int tb() {
		float d = (d1 + d2) / 2;
		if(d1 >= 8 && d2 >= 8) d++;
		else if(d1 >= 7.5 && d2>=7.5) d+=0.5;
		if(d > 10) d = 10;
		return Math.round(d);
	}
	public String loai() {
		int d = tb();
		
		if(d < 5) return "Truot";
		else if(5 <= d && d <= 6) return "Trung binh";
		else if(d == 7) return "Kha";
		else if(d == 8) return "Gioi";
		else return "Xuat sac";
	}
	public int tuoi() {
		int nam = Integer.parseInt(ns.substring(ns.length() - 4));
		return 2021 - nam;
	}
	public String toString() {
		return ma + " " + ten + " " + tuoi() + " " + tb() + " " + loai();
	}
}
