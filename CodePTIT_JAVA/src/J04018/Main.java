package J04018;

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
		int t = sc.nextInt();
		while(t-- > 0) {
			SoPhuc a = new SoPhuc(sc.nextInt(), sc.nextInt());
			SoPhuc b = new SoPhuc(sc.nextInt(), sc.nextInt());	
			System.out.print((a.tong(b)).tich(a) + ", ");
			System.out.println((a.tong(b)).tich(a.tong(b)));
		}
	}
}
