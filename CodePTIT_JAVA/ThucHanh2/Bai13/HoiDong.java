package ThucHanh2.Bai13;

import java.util.ArrayList;

public class HoiDong {
	private ArrayList<BaoCao> ds = new ArrayList<>();

	public HoiDong() {
		super();
	}
	public void themDS(SinhVien sv, DeTai dt) {
		this.ds.add(new BaoCao(sv, dt));
	}
	public void xemDS() {
		for(BaoCao p : this.ds) {
			System.out.println(p);
		}
	}
}
