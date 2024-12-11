import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;
import java.util.TreeSet;

public class Bai5 {
	public static void main(String[] args) throws FileNotFoundException {
		Scanner sc = new Scanner(new File("DATA1.in"));
		Set<String> set1 = new TreeSet<>();
		Set<String> set2 = new HashSet<>();
		Set<String> hop = new TreeSet<>();
		
		while(sc.hasNext()) {
			String s = sc.next();
			set1.add(s);
			hop.add(s);
		}
		sc = new Scanner(new File("DATA2.in"));
		while(sc.hasNext()) {
			String s = sc.next();
			set2.add(s);
			hop.add(s);
		}
		for(String s : hop) {
			System.out.print(s + " ");
		}
		System.out.println();
		for(String s : set1) {
			if(set2.contains(s))
				System.out.print(s + " ");
		}
		System.out.println();
	}
}
