package ThucHanh2;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;
import java.util.Set;
import java.util.TreeSet;

public class Bai2 {
	public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
		ObjectInputStream in = new ObjectInputStream(new FileInputStream("DATA1.in"));
		ArrayList<String> word = (ArrayList<String>) in.readObject();
		in = new ObjectInputStream(new FileInputStream("DATA2.in"));
		ArrayList<Integer> num = (ArrayList<Integer>) in.readObject();
		
		
		
		Set<String> res = new TreeSet<>();
		Set<String> chu = new TreeSet<>();
		Set<Integer> so = new TreeSet<>();
		
		for(String w : word) {
			chu.add(w);
		}
		for(Integer n : num) {
			so.add(n);
		}
		for(String w : chu) {
			for(Integer n : so) {
				String s = w + n.toString();
				res.add(s);
			}
		}
		for(String s : res) {
			System.out.println(s);
		}
	}
}
