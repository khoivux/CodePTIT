package ThucHanh1;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Scanner;
import java.util.Set;
import java.util.TreeSet;

public class Bai7 {
	public static boolean check(String s) {
		boolean ok = false;
		s.toLowerCase();
		for(int i = 0; i < s.length(); i++) {
			Character c = s.charAt(i);
			if(Character.isDigit(c)) {
				ok = true;
			}
			else if(c == '.' || c == '?' ||c == ',' || c == '!' || c == ':') {
				return false;
			}
		}
		return ok;
	}
	public static void main(String[] args) throws FileNotFoundException {
		Scanner in = new Scanner(new FileInputStream("VANBAN.in"));
		//Scanner in = new Scanner(System.in);
		ArrayList<String> list = new ArrayList<>();
		Set<String> set = new TreeSet<>();
		while(in.hasNext()) {
			String s = in.next().trim();
			if(check(s) && s != null) {
				set.add(s);
			}
		}
		for(String s : set) {
			System.out.println(s);
		}
	}
}
