package J07054;

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
		Scanner sc = new  Scanner(new File("BANGDIEM.in"));
		int t = Integer.parseInt(sc.nextLine());
		List<SinhVien> list = new ArrayList<>();
		for(int i = 1; i <= t; i++) {
			list.add(new SinhVien(String.format("SV%02d", i), convert(sc.nextLine()), Double.parseDouble(sc.nextLine()), Double.parseDouble(sc.nextLine()), Double.parseDouble(sc.nextLine())));
		}
		Collections.sort(list);
		int cnt = 1;
		System.out.println(list.get(0) + " " + cnt);
		for(int i = 1; i < list.size(); i++) {
			if(list.get(i).trungBinh() == list.get(i - 1).trungBinh()) {
				System.out.println(list.get(i) + " " + cnt);
			}
			else {
				cnt++;
				System.out.println(list.get(i) + " " + cnt);
			}
		}
	}
	
}
//2
//   ha Thi kieu     anh
//7
//6
//7
//Pham    THI  HAO
//6
//7
//6
