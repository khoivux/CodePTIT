package J05028;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = Integer.parseInt(sc.nextLine());
		List<DoanhNghiep> list = new ArrayList<>();
		while(t-- > 0) {
			list.add(new DoanhNghiep(sc.nextLine(), sc.nextLine(), Integer.parseInt(sc.nextLine())));
		}
		Collections.sort(list);
		for(DoanhNghiep dn : list) {
			System.out.println(dn);
		}
	}
}
