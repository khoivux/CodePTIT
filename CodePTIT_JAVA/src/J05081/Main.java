package J05081;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
		int t = sc.nextInt();
		sc.nextLine();
		ArrayList<Product> list = new ArrayList<>();
		int index = 0;
		while(t-- > 0) {
			Product product = new Product("MH" + String.format("%03d", ++index), sc.nextLine(), sc.nextLine(), 
										Integer.parseInt(sc.nextLine()), Integer.parseInt(sc.nextLine()));
			list.add(product);
		}
		Collections.sort(list);
		for(Product product : list) {
			System.out.println(product);
		}
	}
}
