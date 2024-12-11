package J05041;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = Integer.parseInt(sc.nextLine());
		List<NhanVien> list = new ArrayList<>();

		for(int i = 1; i <= t; i++) {
			list.add(new NhanVien(String.format("NV%02d", i), sc.nextLine(),
					Integer.parseInt(sc.nextLine()), Integer.parseInt(sc.nextLine()), sc.nextLine()));
		}
		Collections.sort(list);
		for(NhanVien a : list) {
			System.out.println(a);
		}
	}
}
//3
//Cao Van Vu
//50000
//26
//GD
//Do Van Truong
//40000
//25
//PGD
//Truong Thi Tu Linh
//45000
//22
//NV