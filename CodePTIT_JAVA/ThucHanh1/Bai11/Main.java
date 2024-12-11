package ThucHanh1.Bai11;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) throws ParseException, FileNotFoundException {
		//Scanner in = new Scanner(System.in);
		Scanner in = new Scanner(new FileInputStream("MUAHANG.in"));
		int t = t = Integer.parseInt(in.nextLine());
		ArrayList<Product> products = new ArrayList<>();
		while(t-- > 0) {
			Product p = new Product(in.nextLine(), in.nextLine(), Long.parseLong(in.nextLine()), Integer.parseInt(in.nextLine()));
			products.add(p);
		}
		t = Integer.parseInt(in.nextLine());
		ArrayList<Customer> customers = new ArrayList<>();
		while(t-- > 0) {
			SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");		
			Customer c = new Customer(in.nextLine(), in.nextLine(), in.nextLine(), Long.parseLong(in.nextLine()),
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
