package J07048;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) throws FileNotFoundException {
		Scanner sc = new Scanner(new File("SANPHAM.in"));
		int t = Integer.parseInt(sc.nextLine());
		List<SanPham> list = new ArrayList<>();
		while(t-- > 0) {
			list.add(new SanPham(sc.nextLine(), sc.nextLine(), Integer.parseInt(sc.nextLine()), Integer.parseInt(sc.nextLine())));
		}
		Collections.sort(list);
		for(SanPham s : list) {
			System.out.println(s);
		}
	}
}
