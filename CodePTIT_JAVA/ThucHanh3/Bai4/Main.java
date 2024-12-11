package ThucHanh3.Bai4;

import java.io.File;
import java.io.FileNotFoundException;
import java.time.LocalTime;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) throws FileNotFoundException {
		Scanner sc = new Scanner(new File("BAITAP.in"));
		Map<String, SinhVien> map = new HashMap<>();
		ArrayList<BaoCao> sang = new ArrayList<>();
		ArrayList<BaoCao> chieu = new ArrayList<>();
		while(sc.hasNext()) {
			SinhVien sv = new SinhVien(sc.nextLine(), sc.nextLine(), sc.nextLine());
			map.put(sv.getMa(), sv);
		}
		
		sc = new Scanner(new File("BAOCAO.in"));
		while(sc.hasNext()) {
			BaoCao b = new BaoCao(map.get(sc.nextLine()), LocalTime.parse(sc.nextLine()));
			if(b.getGioB() < 12) 
				sang.add(b);
			else
				chieu.add(b);
		}
		Collections.sort(sang);
		Collections.sort(chieu);
		System.out.println("DANH SACH SINH VIEN BAO CAO CA SANG: " + sang.size());
		for(BaoCao b : sang) {
			System.out.println(b);
		}
		System.out.println("DANH SACH SINH VIEN BAO CAO CA CHIEU: " + chieu.size());
		for(BaoCao b : chieu) {
			System.out.println(b);
		}
	}
}
//B19DCCN123
//Tran Van An
//Tim hieu dien toan dam may
//B19DCCN987
//Hoang Van Binh
//Xay dung game nhap vai
//B20DCCN222
//Nguyen Van Huy
//Xay dung web ban hang
//B19DCCN123
//13:45
//B19DCCN987
//07:30
//B20DCCN222
//08:00