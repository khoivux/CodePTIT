package ThucHanh2.Bai9;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) throws FileNotFoundException {
		Scanner in = new Scanner(new File("SINHVIEN.in"));
		int n = Integer.parseInt(in.nextLine());
		ArrayList<SinhVien> list = new ArrayList<>();
		while(n-- > 0) {
			SinhVien s = new SinhVien(in.nextLine(), in.nextLine(), in.nextLine(),
										in.nextLine(), in.nextLine(), in.nextLine());
			list.add(s);
		}
		Collections.sort(list);
		
		in = new Scanner(new File("DANGKY.in"));
		while(in.hasNext()) {
			String a[] = in.nextLine().split("\\s+");
			String ma = a[0], size = a[1];
			for(SinhVien s : list) {
				if(s.getMa().equals(ma)) {
					s.setSize(size);
					break;
				}
			}
		}
		in = new Scanner(new File("TRUYVAN.in"));
		n = Integer.parseInt(in.nextLine());
		while(n-- > 0) {
			String a[] = in.nextLine().split("\\s+");
			String gt = a[0], size = a[1];
			System.out.println("DANH SACH SINH VIEN " + gt.toUpperCase() + " DANG KY SIZE " + size);
			for(SinhVien s : list) {
				if(s.getSize().equals(size) && s.getGioiTinh().equals(gt)) {
					System.out.println(s);
				}
			}
		}
	}
}
//2
//B21DCCN111
//Hoang Van An
//D21CQCN01-B
//hoangvanan@gmail.com
//0912999888
//Nam
//B21DCAT999
//Tran Van Binh
//D21CQAT01-B
//chinh31503@gmail.com
//838831503
//Nam
//2
//B21DCCN111 L
//B21DCAT999 XL
//1
//Nam L