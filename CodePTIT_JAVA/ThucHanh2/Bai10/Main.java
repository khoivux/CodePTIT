package ThucHanh2.Bai10;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) throws ParseException, FileNotFoundException {
		Scanner in = new Scanner(new FileInputStream("MUAHANG.in"));
		int t = t = Integer.parseInt(in.nextLine());
		ArrayList<Product> products = new ArrayList<>();
		while(t-- > 0) {
			Product p = new Product(in.nextLine(), in.nextLine(), Long.parseLong(in.nextLine()), Integer.parseInt(in.nextLine()));
			products.add(p);
		}
		t = Integer.parseInt(in.nextLine());
		ArrayList<Customer> customers = new ArrayList<>();
		for(int i = 1; i <= t; i++) {
			SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");		
			Customer c = new Customer(String.format("KH%02d", i), in.nextLine(), in.nextLine(), in.nextLine(), Long.parseLong(in.nextLine()),
								sdf.parse(in.nextLine()));
			for(Product p : products) {
				if(c.getProductId().equals(p.getId())) {
					c.setCost(p.getPrice());
					c.setWarrantyDate(p.getWarranty());
					break;
				}
			}
			customers.add(c);
		}
		Collections.sort(customers);
		for(Customer c : customers) {
			System.out.println(c);
		}
	}
}

//2
//KC740
//May khoan KC1
//39
//18
//KC742
//May cat KC2
//46
//12
//2
//Le Ngoc Long
//Hoang Mai
//KC740
//11
//21/05/2009
//Nguyen Sao Mai
//Hoan Kiem
//KC742
//17
//06/02/2009