package J07045;

public class LoaiPhong implements Comparable<LoaiPhong>{
	private String ma, ten, donGia, phi;

	public LoaiPhong(String s) {
		super();
		String a[] = s.split("\\s+");
		this.ma = a[0];
		this.ten = a[1];
		this.donGia = a[2];
		this.phi = a[3];
	}

	@Override
	public int compareTo(LoaiPhong o) {
		return this.ten.compareTo(o.ten);
	}
	public String toString() {
		return ma + " " + ten + " " + donGia + " " + phi;
	}
}
