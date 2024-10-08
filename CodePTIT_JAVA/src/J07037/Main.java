package J07037;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) throws FileNotFoundException {
		Scanner in = new Scanner(new FileInputStream("DN.in"));
		int t = Integer.parseInt(in.nextLine());
		ArrayList<Company> list = new ArrayList<>();
		while(t-- > 0) {
			Company co = new Company(in.nextLine(), in.nextLine(), Integer.parseInt(in.nextLine()));
			list.add(co);
		}
		Collections.sort(list);
		for(Company co : list) {
			System.out.println(co);
		}
	}
}
