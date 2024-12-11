package ThucHanh2.Bai3;

import java.util.Set;
import java.util.TreeSet;

public class WordSet {
	private String chuoi;
	private Set<String> set = new TreeSet<>();
	public WordSet(String chuoi) {
		super();
		this.chuoi = chuoi;
		String[] a = chuoi.toLowerCase().split("\\s+");
		for(int i = 0; i < a.length; i++) {
			set.add(a[i]);
		}
	}

	public String union(WordSet s) {
		Set<String> hop = new TreeSet<>();
		for(String str : this.set) {
			hop.add(str);
		}
		for(String str : s.set) {
			hop.add(str);
		}
		String res = "";
		for(String str : hop) {
			res = res + str;
			res += " ";
		}
		return res;
	}
	public String  intersection(WordSet s) {
		String res = "";
		for(String str : this.set) {
			if(s.set.contains(str)) {
				res = res + str;
				res += " ";
			}
		}
		return res;
	}
}
