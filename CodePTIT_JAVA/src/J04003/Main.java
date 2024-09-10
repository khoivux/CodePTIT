package J04003;

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		PhanSo ps = new PhanSo(sc.nextLong(), sc.nextLong());
		ps.rutGon();
		System.out.println(ps);
	}
}
