package J07059;

import java.text.SimpleDateFormat;
import java.time.LocalTime;
import java.util.Date;

public class CaThi implements Comparable<CaThi>{
	private String ma;
	private Date ngay;
	private LocalTime gio;
	private String phong;
	public CaThi(String ma, Date ngay, LocalTime gio, String phong) {
		super();
		this.ma = ma;
		this.ngay = ngay;
		this.gio = gio;
		this.phong = phong;
	}
	public String getNgay() {
		SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
		return sdf.format(ngay);
	}
	public String toString() {
		return ma + " " + getNgay() + " " + gio + " " + phong;
	}
	@Override
	public int compareTo(CaThi other) {
		int dateComparison = this.ngay.compareTo(other.ngay);
        if (dateComparison != 0) {
            return dateComparison;
        }
        int timeComparison = this.gio.compareTo(other.gio);
        if (timeComparison != 0) {
            return timeComparison;
        }
        return this.ma.compareTo(other.ma);
	}
}
