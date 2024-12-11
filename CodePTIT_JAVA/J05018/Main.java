package J05018;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		ArrayList<Student> list = new ArrayList<>();
		for(int i = 1; i <= t; i++) {
			sc.nextLine();
			String name = sc.nextLine();
			ArrayList<Double> listP = new ArrayList<>();
			for(int j = 1; j <= 10; j++) {
				listP.add(sc.nextDouble());
			}
			Student s = new Student(String.format("HS%02d", i), name, listP);
			list.add(s);
		}
		Collections.sort(list);
		for(Student s : list) {
			System.out.println(s);
		}
	}
}
//3
//Luu Thuy Nhi
//9.3  9.0  7.1  6.5  6.2  6.0  8.2  6.7  4.8  5.5
//Le Van Tam
//8.0  8.0  5.5  9.0  6.8  9.0  7.2  8.3  7.2  6.8
//Nguyen Thai Binh
//9.0  6.4  6.0  7.5  6.7  5.5  5.0  6.0  6.0  6.0