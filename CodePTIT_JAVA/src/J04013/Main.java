package J04013;

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
		Student student = new Student(sc.nextLine(), sc.nextLine(), Double.parseDouble(sc.nextLine()),
									Double.parseDouble(sc.nextLine()), Double.parseDouble(sc.nextLine()));
		System.out.println(student);
	}
}
