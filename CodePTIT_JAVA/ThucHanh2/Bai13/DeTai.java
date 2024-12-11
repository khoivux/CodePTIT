package ThucHanh2.Bai13;

public class DeTai {
	private String ma, ten, tenGV;

	public DeTai(String ma, String ten, String tenGV) {
		super();
		this.ma = ma;
		this.ten = ten;
		this.tenGV = tenGV;
	}

	public String toString() {
		return ten + " " + tenGV;
	}
}
