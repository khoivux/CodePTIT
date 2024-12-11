package FinalContest.Bai13;

import java.time.Duration;
import java.util.Date;

public class Sinhvien implements Comparable<Sinhvien>{
	private String ten;
	private Date bd, kt;
	public Sinhvien(String ten, Date bd, Date kt) {
		super();
		this.ten = ten;
		this.bd = bd;
		this.kt = kt;
	}
	public Long getDuration() {
		return (kt.getTime() - bd.getTime()) / 60000;
	}
	public String toString() {
		return ten + " " + getDuration();
	}
	@Override
	public int compareTo(Sinhvien arg0) {
		if(this.getDuration() != arg0.getDuration()) return (int) (- this.getDuration() + arg0.getDuration());
		else return this.ten.compareTo(arg0.ten);
	}
}
