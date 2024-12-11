package ThucHanh3.Bai4;

import java.time.LocalTime;

public class BaoCao implements Comparable<BaoCao>{
	private SinhVien s;
	private LocalTime gio;
	public BaoCao(SinhVien s, LocalTime gio) {
		super();
		this.s = s;
		this.gio = gio;
	}
	public int getGioB() {
		return gio.getHour();
	}
	public int getPhut() {
		return gio.getMinute();
	}
	public String gioMoi() {
		int g = gio.getHour();
		if(g > 12) {
			return String.format("%02d", g - 12);
		}
		else 
			return String.format("%02d", g);
	}
	public String toString() {
		return s.toString() + gioMoi() + ":" + String.format("%02d", getPhut());
	}
	@Override
	public int compareTo(BaoCao o) {
		if(this.getGioB() == o.getGioB()) {
			return this.getPhut() - o.getPhut();
		}
		else return this.getGioB() - o.getGioB();
	}
}
