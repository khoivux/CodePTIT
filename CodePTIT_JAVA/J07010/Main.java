package J07010;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) throws FileNotFoundException, NumberFormatException, ParseException {
		Scanner in = new Scanner(new FileInputStream("SV.in"));
		int n = Integer.parseInt(in.nextLine());
		while(n-- > 0) {
			Student student = new Student(in.nextLine(), in.nextLine(), in.nextLine(),
									Double.parseDouble(in.nextLine()));
			System.out.println(student);
		}
	}
}
