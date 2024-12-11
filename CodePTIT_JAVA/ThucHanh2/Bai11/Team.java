package ThucHanh2.Bai11;

public class Team implements Comparable<Team>{
	private String ma, ten;
	private Truong truong;
	public Team(String ten, Truong truong) {
		super();
		this.ten = ten;
		this.truong = truong;
	}
	
	public Truong getTruong() {
		return truong;
	}

	public void setMa(String ma) {
		this.ma = ma;
	}

	public String toString() {
		return ma + " " + ten + " " + truong.getTen();
	}
	@Override
	public int compareTo(Team t) {
		if(truong.getTen().equals(t.getTruong().getTen())) {
			return ten.compareTo(t.ten);
		}
		else {
			return truong.getTen().compareTo(t.getTruong().getTen());
		}
	}
}
