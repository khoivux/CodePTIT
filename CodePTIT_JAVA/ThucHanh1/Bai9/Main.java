package ThucHanh1.Bai9;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) throws FileNotFoundException {
		//Scanner in = new Scanner(System.in);
		Scanner in = new Scanner(new FileInputStream("LUYENTAP.in"));
		int t = in.nextInt();
		ArrayList<Student> list = new ArrayList<>();
		while(t-- > 0) {
			in.nextLine();
			Student s = new Student(in.nextLine(), Long.parseLong(in.next()), Long.parseLong(in.next()));
			list.add(s);
		}
		Collections.sort(list);
		for(Student s : list) {
			System.out.println(s);
		}
	}
}
