package J05038;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = Integer.parseInt(sc.nextLine());
		Integer sum = 0;
		for(int i = 1; i <= t; i++) {
			NhanVien a = new NhanVien(String.format("NV%02d", i), sc.nextLine(),
					Integer.parseInt(sc.nextLine()), Integer.parseInt(sc.nextLine()), sc.nextLine());
			System.out.println(a);
			sum += a.thucLinh();
		}
		System.out.println("Tong chi phi tien luong: " + sum);
	}
}
//5
//Cao Van Vu
//50000
//26
//GD
//Bui Thi Trang
//45000
//23
//PGD
//Do Van Truong
//40000
//25
//PGD
//Nguyen Van Cam
//37000
//26
//TP
//Truong Thi Tu Linh
//45000
//22
//NV