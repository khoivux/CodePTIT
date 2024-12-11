package J05048;

import java.util.ArrayList;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = Integer.parseInt(sc.nextLine());
		ArrayList<SanPham> list = new ArrayList<>();
		while(t-- > 0) {
			list.add(new SanPham(sc.nextLine(), Integer.parseInt(sc.nextLine())));
		}
		for(SanPham s : list) {
			System.out.println(s);
		}
	}
}
//3
//A001Y
//1000
//B012N
//2500
//B003Y
//4582