package J05044;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		ArrayList<NhanVien> list = new ArrayList<>();
		
		int t = Integer.parseInt(sc.nextLine());
		for(int i = 1; i <= t; i++) {
			list.add(new NhanVien(String.format("NV%02d", i), sc.nextLine(), sc.nextLine(), Integer.parseInt(sc.nextLine()), Integer.parseInt(sc.nextLine())));
		}
		Collections.sort(list);
		for(NhanVien n : list) {
			System.out.println(n);
		}
	}
}
//4
//Tran Thi Yen
//NV
//1000
//24
//Nguyen Van Thanh
//BV
//1000
//30
//Doan Truong An
//TP
//3000
//25
//Le Thanh
//GD
//5000
//28