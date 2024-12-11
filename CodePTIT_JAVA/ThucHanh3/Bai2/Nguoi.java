package ThucHanh3.Bai2;

import java.time.Duration;
import java.time.LocalTime;

public class Nguoi implements Comparable<Nguoi>{
	private String ma, ten;
	private LocalTime gioBD, gioKT;
	public Nguoi(String ma, String ten, LocalTime gioBD, LocalTime gioKT) {
		super();
		this.ma = ma;
		this.ten = ten;
		this.gioBD = gioBD;
		this.gioKT = gioKT;
	}
	public long getGio( ) {
		Duration duration = Duration.between(gioBD, gioKT);
		long gio = duration.toHours();
		if(gio > 1) return gio -1;
		else return 0L;
	}
	public long getPhut( ) {
		Duration duration = Duration.between(gioBD, gioKT);
		if(getGio() < 1)
			return 0L;
		return duration.toMinutes() % 60;
	}
	public String chuan() {
		if(getGio() >= 8) return "DU";
		else return "THIEU";
	}
	public String toString() {
		return ma + " " + ten + " " + getGio() + " gio " + String.format("%02d", getPhut()) + " phut " + chuan() ;
	} 
	@Override
	public int compareTo(Nguoi a) {
		if(getGio() == a.getGio()) {
			if(a.getPhut() == getPhut()) { 
				return this.ma.compareTo(a.ma);
			}
			else
			 return (int) (a.getPhut() - getPhut());
		}
		else
			return (int) (a.getGio() - getGio());
	}
}
