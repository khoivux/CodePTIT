package J04014;

public class PhanSo {
	private long tu, mau;

	public PhanSo(long tu, long mau) {
		this.tu = tu;
		this.mau = mau;
	}
	public PhanSo() {
		
	}
	public void rutGon() {
		long a = tu;
		long b = mau;
        while (a != 0) {
        	long x = a;
            a = b % a;
            b = x;
        }
        tu /= b;
        mau /= b;
	}
	public PhanSo tongPhanSo(PhanSo a) {
		PhanSo tong = new PhanSo(); 
		tong.mau = this.mau * a.mau;
		tong.tu = this.tu * a.mau + a.tu * this.mau;
		tong.rutGon();
		return tong;
	}
	public PhanSo tichPhanSo(PhanSo a) {
		PhanSo tich = new PhanSo();
		tich.tu = this.tu * a.tu;
		tich.mau = this.mau * a.mau;
		tich.rutGon();
		return tich;
	}
	public String toString() {
		return tu + "/" + mau;
	}
}
