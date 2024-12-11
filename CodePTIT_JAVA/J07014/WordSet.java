package J07014;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;
import java.util.TreeSet;

public class WordSet {
	private Set<String> set = new HashSet<>();

	public WordSet(String file) throws FileNotFoundException {
		Scanner sc = new Scanner(new File(file));
		while(sc.hasNext()) {
			set.add(sc.next().toLowerCase());
		}
	}
	
	public String union(WordSet s2) {
		Set<String> res = new TreeSet<>();
		StringBuilder str = new StringBuilder("");
		for(String s : set) {
			res.add(s);
		}
		for(String s : s2.set) {
			res.add(s);
		}
		for(String s : res) {
			str.append(s + " ");
		}
		return str.toString();
	}
	public String intersection(WordSet s2) {
		Set<String> res = new TreeSet<>();
		StringBuilder str = new StringBuilder("");
		for(String s : set) {
			if(s2.set.contains(s))
				res.add(s);
		}
		for(String s : res) {
			str.append(s + " ");
		}
		return str.toString();
	}
}
