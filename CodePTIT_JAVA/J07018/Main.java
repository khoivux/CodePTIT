package J07018;

import java.io.File;
import java.io.FileNotFoundException;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Scanner;

public class Main {
	public static String convert(String s) {
		String res = "";
		String a[] = s.toLowerCase().trim().split("\\s+");
		for(int i = 0; i < a.length; i++) {
			res += Character.toUpperCase(a[i].charAt(0));
			res += a[i].substring(1);
			if(i < a.length - 1) res += " ";
		}
		return res;
	}
	public static void main(String[] args) throws NumberFormatException, ParseException, FileNotFoundException {
		Scanner sc = new Scanner(new File("SINHVIEN.in"));
		int n = Integer.parseInt(sc.nextLine());
		SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
		for(int i = 1; i <= n; i++) {
			Sinhvien s = new Sinhvien(String.format("B20DCCN%03d", i), convert(sc.nextLine()), sc.nextLine(), sdf.parse(sc.nextLine()), Float.parseFloat(sc.nextLine()));
			System.out.println(s);
		}
	}
}
//1
//nGuyEn  vaN    biNH
//D20CQCN01-B
//2/12/2002
//3.1