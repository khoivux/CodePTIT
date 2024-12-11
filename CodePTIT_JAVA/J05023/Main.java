package J05023;

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
			String khoa = sc.nextLine();
			System.out.println("DANH SACH SINH VIEN KHOA " + khoa + ":");
			for(Student student : list) {
				StringBuilder strb = new StringBuilder(khoa);
				if(strb.substring(2).toString().equals(student.getKhoa())) {
					System.out.println(student);
				}
			}
		}
	}
}

