package J05031;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
		int t = Integer.parseInt(sc.nextLine());
		List<SinhVien> list = new ArrayList<>();
		while(t-- > 0) {
			SinhVien s = new SinhVien(sc.nextLine(), sc.nextLine(), sc.nextLine(),
					Double.parseDouble(sc.nextLine()), Double.parseDouble(sc.nextLine()), Double.parseDouble(sc.nextLine()));
			list.add(s);
		}
		Collections.sort(list);
		int cnt = 1;
		for(SinhVien s : list) {
			System.out.println(cnt + " " + s);
			cnt++;
		}
	}
}
