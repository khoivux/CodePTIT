package ThucHanh1.Bai8;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) throws FileNotFoundException {
		//Scanner in = new Scanner(System.in);
		Scanner in = new Scanner(new FileInputStream("DANHSACH.in"));
		ArrayList<Student> list = new ArrayList<>();
		while(in.hasNext()) {
			Student s = new Student(in.nextLine(), in.nextLine(), in.nextLine(), in.nextLine(), in.nextLine());
			list.add(s);
		}
		Collections.sort(list);
		for(Student s : list) {
			System.out.println(s);
		}
	}
}
