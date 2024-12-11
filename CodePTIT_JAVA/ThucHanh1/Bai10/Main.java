package ThucHanh1.Bai10;

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
		Scanner in = new Scanner(new FileInputStream("ONLINE.in"));
		int t = in.nextInt();
		in.nextLine();
		ArrayList<Student> list = new ArrayList<>();
		while(t-- > 0) {
			SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy HH:mm:ss");		
			Student s = new Student(in.nextLine(), sdf.parse(in.nextLine()), sdf.parse(in.nextLine()));
			list.add(s);
		}
		Collections.sort(list);
		for(Student s : list) {
			System.out.println(s);
		}
	}
}
