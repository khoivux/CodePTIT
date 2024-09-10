package J04004;

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
	PhanSo tongPhanSo(PhanSo a) {
		PhanSo tong = new PhanSo(); 
		tong.mau = this.mau * a.getMau();
		tong.tu = this.tu * a.getMau() + a.getTu() * this.mau;
		tong.rutGon();
		return tong;

	}
	public long getTu() {
		return tu;
	}

	public void setTu(long tu) {
		this.tu = tu;
	}

	public long getMau() {
		return mau;
	}

	public void setMau(long mau) {
		this.mau = mau;
	}

	public String toString() {
		return tu + "/" + mau;
	}
}
