package ThucHanh2.Bai12;

public class LichThi implements Comparable<LichThi>{
	private String nhom, sv;
	private MonHoc mon;
	private CaThi ca;
	public LichThi(String nhom, String sv, MonHoc mon, CaThi ca) {
		super();

		this.nhom = nhom;
		this.sv = sv;
		this.mon = mon;
		this.ca = ca;
	}
	
	public String toString() {
		return ca.toString() + " " + mon.getTen() + " " + nhom + " " + sv; 
	}

	@Override
	public int compareTo(LichThi o) {
		if(ca.getNgay().equals(o.ca.getNgay())) {
			if(ca.getGio().equals(o.ca.getGio())) {
				return ca.getMa().compareTo(o.ca.getMa());
			}
			else return ca.getGio().compareTo(o.ca.getGio());
		}
		else return ca.getNgay().compareTo(o.ca.getNgay());
	}
}
