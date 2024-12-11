package ThucHanh2.Bai7;

public class MonHoc implements Comparable<MonHoc>{
	private String maMon, tenMon, hinhThuc;

	public MonHoc(String maMon, String tenMon, String hinhThuc) {
		super();
		this.maMon = maMon;
		this.tenMon = tenMon;
		this.hinhThuc = hinhThuc;
	}
	
	public String getMaMon() {
		return maMon;
	}

	public String toString() {
		return maMon + " " + tenMon + " " + hinhThuc;
	}

	@Override
	public int compareTo(MonHoc a) {
		return maMon.compareTo(a.maMon);
	}
}
