package J05029;

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
		int q = Integer.parseInt(sc.nextLine());
		while(q-- > 0) {
			int min = Integer.parseInt(sc.next()), max = Integer.parseInt(sc.next());
			System.out.printf("DANH SACH DOANH NGHIEP NHAN TU %d DEN %d SINH VIEN:\n", min, max);			
			for(DoanhNghiep dn : list) {
				if(dn.getSoLuong() >= min && dn.getSoLuong() <= max) {
					System.out.println(dn);
				}
			}
		}
	}
}
//4
//VIETTEL
//TAP DOAN VIEN THONG QUAN DOI VIETTEL
//40
//FSOFT
//CONG TY TNHH PHAN MEM FPT - FPT SOFTWARE
//300
//VNPT
//TAP DOAN BUU CHINH VIEN THONG VIET NAM
//200
//SUN
//SUN*
//50
//1
//30 50
