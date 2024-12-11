package J05024;

import java.util.ArrayList;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = Integer.parseInt(sc.nextLine());
		ArrayList<Student> list = new ArrayList<>();
		while(t-- > 0) {
			Student s = new Student(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
			list.add(s);
		}
		int q = Integer.parseInt(sc.nextLine());
		while(q-- > 0) {
			String qe = sc.nextLine();
			String[] request = qe.split("\\s+");
			String major = "";
			major += Character.toUpperCase(request[0].charAt(0));
			major += Character.toUpperCase(request[1].charAt(0));
			System.out.println("DANH SACH SINH VIEN NGANH " + qe.toUpperCase() +":");
			for(Student s : list) {
				if(s.getClas().charAt(0) == 'E' && (major.equals("CN") || major.equals("AT"))) {
					continue;
				}
				if(s.getId().contains(major)) {
					System.out.println(s);
				}
			}
			
		}
	}
}
//4
//B16DCCN011
//Nguyen Trong Duc Anh
//D16CNPM1
//sv1@stu.ptit.edu.vn
//B15DCCN215
//To Ngoc Hieu
//D15CNPM3
//sv2@stu.ptit.edu.vn
//B15DCKT150
//Nguyen Ngoc Son
//D15CQKT02-B
//sv3@stu.ptit.edu.vn
//B15DCKT199
//Nguyen Trong Tung
//D15CQKT02-B
//sv4@stu.ptit.edu.vn
//1
//Ke toan