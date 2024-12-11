package J07053;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class Main {
	public static String convert(String s) {
		String a[] = s.trim().toLowerCase().split("\\s+");
		String res = "";
		for(int i = 0; i < a.length; i++) {
			res += Character.toUpperCase(a[i].charAt(0));
			res += a[i].substring(1);
			res += " ";
		}
		return res.trim();
	}
	public static void main(String[] args) throws FileNotFoundException {
		Scanner sc = new Scanner(new File("XETTUYEN.in"));
		int t = Integer.parseInt(sc.nextLine());
		for(int i = 1; i <= t; i++) {
			SinhVien s = new SinhVien(String.format("PH%02d", i), convert(sc.nextLine()), sc.nextLine(), Float.parseFloat(sc.nextLine()), Float.parseFloat(sc.nextLine()));
			System.out.println(s);
		}
	}
}
//3
//Doan Thi Kim
//13/03/1982
//8
//9.5
//dinh Thi NGOC HA
//3/9/1996
//6.5
//8
//  tran thanh mai
//12/9/2004
//8
//9