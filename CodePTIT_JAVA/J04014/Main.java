package J04014;

import java.util.Scanner;

import J04014.PhanSo;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-- > 0) {
			PhanSo a = new PhanSo(sc.nextLong(), sc.nextLong());
			PhanSo b = new PhanSo(sc.nextLong(), sc.nextLong());
			PhanSo tong = a.tongPhanSo(b);
			System.out.print(tong.tichPhanSo(tong) + " ");
			System.out.println(a.tichPhanSo(b).tichPhanSo(tong.tichPhanSo(tong)));
		}	
	}
}
