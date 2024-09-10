package J05021;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
		int t = sc.nextInt();
		sc.nextLine();
		ArrayList<Student> list = new ArrayList<>();
		while(t-- > 0) {
			Student student = new Student(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
			list.add(student);
		}
		Collections.sort(list);
		for(Student student : list) {
			System.out.println(student);
		}
	}
}
