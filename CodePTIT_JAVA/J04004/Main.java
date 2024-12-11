package J04004;

import java.util.Scanner;

import J04004.PhanSo;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		PhanSo a = new PhanSo(sc.nextLong(), sc.nextLong());
		PhanSo b = new PhanSo(sc.nextLong(), sc.nextLong());
		System.out.println(a.tongPhanSo(b));
	}
}
