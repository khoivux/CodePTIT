package ThucHanh1;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.util.HashSet;
import java.util.Map;
import java.util.Scanner;
import java.util.Set;
import java.util.TreeMap;
import java.util.TreeSet;

public class Bai6 {
	public static void main(String[] args) throws FileNotFoundException {
		Scanner in = new Scanner(new FileInputStream("DANHSACH.in"));
		//Scanner in = new Scanner(System.in);
		int t = 8;
		Map<String, Integer> map = new TreeMap<>();
		Set<String> set = new TreeSet<>();
		while(in.hasNext()) {
			String s = in.nextLine();
			s = s.trim().toLowerCase();
			String[] a = s.split("\\s+");
			
			String name = "";
			for(int i = 0; i < a.length; i++) 
				name += a[i] + " ";
			if(set.contains(name)) continue;
			else set.add(name);
			
			String res = "";
			int n = a.length;
			res += a[n - 1];
			for(int i = 0; i < n - 1; i++) {
				res += a[i].charAt(0);
			}
			if(!map.containsKey(res)) {
				System.out.println(res + "@ptit.edu.vn");
				map.put(res, 1);
			} else {
				map.put(res, map.get(res) + 1);
				System.out.println(res + "" + map.get(res) + "@ptit.edu.vn");
			}
		}
	}
}
