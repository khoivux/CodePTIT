import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Map;
import java.util.Set;
import java.util.TreeSet;

public class J07016 {
	public static boolean prime(Integer n) {
		if(n < 2) return false;
		for(int i = 2; i <= Math.sqrt(n); i++) {
			if(n % i == 0)
				return false;
		}
		return true;
	}
	public static Map<Integer, Integer> setMap(ArrayList<Integer> list) {
		Map<Integer, Integer> m = new HashMap<>();
		for(Integer n : list) {
			if(prime(n)) {
				if(m.containsKey(n)) {
					m.put(n, m.get(n) + 1);
				}
				else 
					m.put(n, 1);
			}
		}
		return m;
	}
	public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
		ObjectInputStream oi = new ObjectInputStream(new FileInputStream("DATA1.in"));
		ArrayList<Integer> list1 = (ArrayList<Integer>) oi.readObject();
		oi = new ObjectInputStream(new FileInputStream("DATA2.in"));
		ArrayList<Integer> list2 = (ArrayList<Integer>) oi.readObject();
		Map<Integer, Integer> map1 = setMap(list1);
		Map<Integer, Integer> map2 = setMap(list2);
		Set<Integer> set = new TreeSet<>(map1.keySet());
		for(Integer n : set) {
			if(map2.containsKey(n)) {
				System.out.println(n + " " + map1.get(n) + " " + map2.get(n));
			}
		}
	}
}
