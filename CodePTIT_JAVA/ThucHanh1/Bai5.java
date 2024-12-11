package ThucHanh1;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Set;
import java.util.TreeSet;

public class Bai5 {
	public static boolean check(Integer n) {
		for(int i = 2; i <= Math.sqrt(n); i++) {
			if(n % i == 0)
				return false;
		}
		return n >= 100;
	}
	public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
		ObjectInputStream in = new ObjectInputStream(new FileInputStream("DAYSO.DAT"));
		ArrayList<Integer> list = (ArrayList<Integer>) in.readObject();
		Collections.sort(list);
		Set<Integer> set = new TreeSet<>();
		for(Integer n : list) {
			if(check(n))
				set.add(n);
		}
		for(Integer n : set) {
			System.out.println(n);
		}
	}
}
