package J05010;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = Integer.parseInt(sc.nextLine());
		ArrayList<Product> list = new ArrayList<>();
		for(int i = 1; i <= t; i++) {
			Product p = new Product(i + "", sc.nextLine(), sc.nextLine(),
					Double.parseDouble(sc.nextLine()), Double.parseDouble(sc.nextLine()));
			list.add(p);
		}
		Collections.sort(list);
		for(Product p : list) {
			System.out.println(p);
		}
	}
}
