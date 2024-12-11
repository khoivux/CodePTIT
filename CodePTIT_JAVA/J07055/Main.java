package J07055;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
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
		Scanner sc = new Scanner(new File("BANGDIEM.in"));
		//Scanner sc = new Scanner(System.in);
		List<SinhVien> list = new ArrayList<>();
		int t = Integer.parseInt(sc.nextLine());
		for(int i = 1; i <= t; i++) {
			SinhVien s = new SinhVien(String.format("SV%02d", i), convert(sc.nextLine()),Float.parseFloat(sc.nextLine()), Float.parseFloat(sc.nextLine()), Float.parseFloat(sc.nextLine()));
			list.add(s);
		}
		Collections.sort(list);
		for(SinhVien s : list) {
			System.out.println(s);
		}
	}
}
//2
//     ha Thi kieu     anh
//7
//6
//7
//Pham    THI  HAO
//6
//7
//6