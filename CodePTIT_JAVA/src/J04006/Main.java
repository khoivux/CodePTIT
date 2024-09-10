package J04006;

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
		Student s = new Student("B20DCCN001", sc.nextLine(), sc.nextLine(), sc.nextLine(), Double.parseDouble(sc.nextLine()));
		s.convertBirthDay();
		System.out.println(s);
	}
}
