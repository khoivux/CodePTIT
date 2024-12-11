package J07051;

import java.io.File;
import java.io.FileNotFoundException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Date;
import java.util.List;
import java.util.Scanner;

public class Main {
	 public static void main(String[] args) throws FileNotFoundException, java.text.ParseException {
	        Scanner sc = new Scanner(new File("KHACHHANG.in"));
	        SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");

	        int n = Integer.parseInt(sc.nextLine());
	        List<Customer> customers = new ArrayList<>();
	        while (n-- > 0) {
	            String name = sc.nextLine().trim();
	            String roomId = sc.nextLine().trim();
	            Date checkInDate = sdf.parse(sc.nextLine());
	            Date checkOutDate = sdf.parse(sc.nextLine());
	            int serviceFee = Integer.parseInt(sc.nextLine());
	            Customer customer = new Customer(name, roomId, checkInDate, checkOutDate, serviceFee);
	            customers.add(customer);
	        }

	        Collections.sort(customers);
	        for (Customer customer : customers) {
	            System.out.println(customer);
	        }
	    }
}
