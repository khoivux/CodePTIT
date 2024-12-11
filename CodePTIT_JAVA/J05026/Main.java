package J05026;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Integer t = Integer.parseInt(sc.nextLine());
		ArrayList<GiangVien> list = new ArrayList<>();
		for(int i = 1; i <= t; i++) {
			GiangVien gv = new GiangVien(String.format("GV%02d", i), sc.nextLine(), sc.nextLine());
			list.add(gv);
		}
		Integer q = Integer.parseInt(sc.nextLine());
		while(q-- > 0) {
			String mon = sc.nextLine();
			String arr[] = mon.toUpperCase().split("\\s+");
			String res = "";
			for(int i = 0; i < arr.length; i++) {
				res = res + arr[i].charAt(0);
			}
			System.out.println("DANH SACH GIANG VIEN BO MON " + res + ":");
			for(GiangVien gv : list) {
				if(gv.getMaKhoa().equals(res)) {
					System.out.println(gv);
				}
			}
		}
	}
}
//3
//Nguyen Manh Son
//Cong nghe phan mem
//Vu Hoai Nam
//Khoa hoc may tinh
//Dang Minh Tuan
//An toan thong tin
//1
//Cong nghe phan mem
