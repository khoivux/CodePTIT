import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.util.Scanner;
import java.util.Set;
import java.util.TreeSet;

public class J07007 {
	public static void main(String[] args) throws FileNotFoundException {
		Scanner in = new Scanner(new FileInputStream("VANBAN.in"));
		Set<String> set = new TreeSet<>();
		while(in.hasNext()) {
			String s = in.next();
			set.add(s.toLowerCase());
		}
		for(String s : set) {
			System.out.println(s);
		}
	}
}
