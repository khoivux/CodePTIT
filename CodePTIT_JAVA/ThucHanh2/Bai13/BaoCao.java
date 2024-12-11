package ThucHanh2.Bai13;

public class BaoCao implements Comparable<BaoCao>{
	private SinhVien sv;
	private DeTai dt;
	public BaoCao(SinhVien sv, DeTai dt) {
		super();
		this.sv = sv;
		this.dt = dt;
	}
	
	public String toString() {
		return sv.toString() + " " + dt.toString();
	}
	@Override
	public int compareTo(BaoCao o) {
		return sv.getMa().compareTo(o.sv.getMa());
	}
}
