package J04021;

import java.util.Set;
import java.util.TreeSet;

public class IntSet {
	private Set<Integer> set = new TreeSet<>();
	public IntSet() {
		super();
		// TODO Auto-generated constructor stub
	}
	public IntSet(int a[]) {
		for(int i = 0; i < a.length; i++) {
			set.add(a[i]);
		}
	}
	public IntSet union(IntSet s) {
		IntSet res = new IntSet();
		for(Integer num : this.set) {
			res.set.add(num);
		}
		for(Integer num : s.set) {
			res.set.add(num);
		}
		return res;
	}
	public String toString() {
		String res = "";
		for(Integer num : this.set) {
			res = res + num.toString() + " ";
		}
		return res;
	}
}
