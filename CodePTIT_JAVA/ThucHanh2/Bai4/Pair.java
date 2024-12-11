package ThucHanh2.Bai4;

public class Pair<T1, T2> {
	T1 dau;
	T2 cuoi;
	public Pair(T1 dau, T2 cuoi) {
		super();
		this.dau = dau;
		this.cuoi = cuoi;
	}
	public String toString() {
		return "(" + dau + "," + cuoi +")";
	}
}
