package J04003;

public class PhanSo {
	private long tu, mau;

	public PhanSo(long tu, long mau) {
		this.tu = tu;
		this.mau = mau;
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
	public String toString() {
		return tu + "/" + mau;
	}


}
