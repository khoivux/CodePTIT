package ThucHanh2;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;
import java.util.Set;
import java.util.TreeSet;

public class Bai5 {
	public static void solve(ArrayList<String> list) {
		Set<Integer> set = new TreeSet<>();
		for(String s : list) {
			String a[] = s.split("\\s+");
			for(int i = 0; i < a.length; i++) {
				try {
					Integer n = Integer.parseInt(a[i]);
					set.add(n);
				} catch(NumberFormatException e) {
					continue;
				}
			}
		}
		for(Integer n : set) {
			System.out.println(n);
		}
	}
	public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
		ObjectInputStream in = new ObjectInputStream(new FileInputStream("DATA.in"));
		ArrayList<String> list = (ArrayList<String>) in.readObject();
		solve(list);
	}
}
