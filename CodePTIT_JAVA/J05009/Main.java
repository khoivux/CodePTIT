package J05009;

import java.util.ArrayList;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = Integer.parseInt(sc.nextLine());
		ArrayList<Student> list = new ArrayList<>();
		Double max = (double) 0;
		for(int i = 1; i <= t; i++) {
			Student s = new Student(i + "", sc.nextLine(), sc.nextLine(),
					Double.parseDouble(sc.nextLine()), Double.parseDouble(sc.nextLine()), Double.parseDouble(sc.nextLine()));
			max = Math.max(max, s.totalPoint());
			list.add(s);
		}
		for(Student s : list) {
			if(s.totalPoint() == max) {
				System.out.println(s);
			}
		}
	}
}

