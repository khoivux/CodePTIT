package ThucHanh2.Bai13;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		Map<String, SinhVien> listSV = new HashMap<>();
		Map<String, DeTai> listDT = new HashMap<>();
		ArrayList<HoiDong> listHD = new ArrayList<>();
		for(int i = 1; i <= 10; i++) {
			listHD.add(new HoiDong());
		}
		int t = Integer.parseInt(in.nextLine());
		while(t-- > 0) {
			String ma = in.nextLine();
			SinhVien sv = new SinhVien(ma, in.nextLine(), in.nextLine(), in.nextLine());
			listSV.put(ma, sv);
		}
		
		t = Integer.parseInt(in.nextLine());
		for(int i = 1; i <= t; i++) {
			String ma = String.format("DT%03d", t);
			listDT.put(ma, new DeTai(ma, in.nextLine(), in.nextLine()));
		}
		
		t = Integer.parseInt(in.nextLine());
		for(int i = 1; i <= t; i++) {
			String a[] = in.nextLine().split("\\s+");
			int index = Integer.parseInt(a[2].charAt(2) + "");
			SinhVien sv = listSV.get(a[0]);
			DeTai dt = listDT.get(a[1]);
			listHD.get(index).themDS(sv, dt);
		}
		
		for(int i = 1; i <= 8; i++) {
			System.out.println(String.format("DANH SACH HOI DONG %d:", i));
			listHD.get(i).xemDS();
		}
	}
}
//2
//B19DCCN999
//Ngo Quang Huy
//0976544443
//B19DCCN999@stu.ptit.edu.vn
//B17DCCN997
//Nguyen Manh Cuong
//0987654321
//B19DCCN997@stu.ptit.edu.vn
//3
//Nguyen Hoai Nam
//Xay dung website tim kiem nha thong minh
//Tran Thanh Cong
//Xay dung he thong diem danh bang nhan dang van tay
//Le Thi My Uyen
//Xay dung website cap nhat tin tuc
//2
//B19DCCN997 DT001 HD2
//B19DCCN999 DT002 HD1