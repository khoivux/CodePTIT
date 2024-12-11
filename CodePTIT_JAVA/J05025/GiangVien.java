package J05025;

public class GiangVien implements Comparable<GiangVien>{
	private String ma, ten, khoa;

	public GiangVien(String ma, String ten, String khoa) {
		super();
		this.ma = ma;
		this.ten = ten;
		this.khoa = khoa;
	}
	public String getMaKhoa() {
		String arr[] = this.khoa.toUpperCase().split("\\s+");
		String res = "";
		for(int i = 0; i < arr.length; i++) {
			res = res + arr[i].charAt(0);
		}
		return res;
	}
	public String toString() {
		return ma + " " + ten + " " + getMaKhoa();
	}
	@Override
	public int compareTo(GiangVien a) {
		String ds1[] = this.ten.split("\\s+");
		String ds2[] = a.ten.split("\\s+");
		String ten1 = ds1[ds1.length - 1];
		String ten2 = ds2[ds2.length - 1];
		if(ten1.equals(ten2)) {
			return this.ma.compareTo(a.ma);
		}
		else return ten1.compareTo(ten2);
	}
}
