package J05022;

import java.util.ArrayList;
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
		int q = sc.nextInt();
		sc.nextLine();
		while(q-- > 0) {
			String clas = sc.nextLine();
			System.out.println("DANH SACH SINH VIEN LOP " + clas + ":");
			for(Student student : list) {
				if(student.getClas().equals(clas)) {
					System.out.println(student);
				}
			}
		}
	}
}

