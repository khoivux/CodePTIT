package J05003;

import java.util.ArrayList;
import java.util.Scanner;

public class Main {
	 public static String convertDate(String date) {
		 StringBuilder res = new StringBuilder(date);
		 if(res.charAt(2) != '/') res.insert(0, '0');
		 if(res.charAt(5) != '/') res.insert(3, '0');
		 return res.toString();
	 }
	 public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		sc.nextLine();
		ArrayList<Student> list = new ArrayList<>();
		while(t-- > 0) {
			Student student = new Student("B20DCCN", sc.nextLine(), sc.nextLine(), convertDate(sc.nextLine()), Double.parseDouble(sc.nextLine()));
			list.add(student);
		}
		for(Student student : list) {
			System.out.println(student);
		}
	}
}
