package J05004;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {
	 public static String convertName(String name) {
		 String[] arr = name.trim().split("\\s+");
		 String res = "";
	        for (String word : arr) {
	            res += word.substring(0, 1).toUpperCase() + word.substring(1).toLowerCase() + " ";
	        }
	     return res.substring(0, res.length() - 1);
	 }
	 public static void main(String[] args) throws ParseException {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		sc.nextLine();
		SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
		while(t-- > 0) {
			Student student = new Student("B20DCCN", convertName(sc.nextLine()), sc.nextLine(), 
					sdf.format(sdf.parse(sc.nextLine())), Double.parseDouble(sc.nextLine()));
			System.out.println(student);
		}
	}
}
