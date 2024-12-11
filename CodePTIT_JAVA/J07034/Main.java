package J07034;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) throws FileNotFoundException {
		Scanner in = new Scanner(new FileInputStream("MONHOC.in"));
		int t = Integer.parseInt(in.nextLine());
		ArrayList<Subject> list = new ArrayList<>();
		while(t-- > 0) {
			Subject subject = new Subject(in.nextLine(), in.nextLine(), Integer.parseInt(in.nextLine()));
			list.add(subject);
		}
		Collections.sort(list);
		for(Subject subject : list) {
			System.out.println(subject);
		}
	}
}
