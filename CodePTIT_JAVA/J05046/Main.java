package J05046;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Main {
	public static String taoMa(String s) {
		String a[] = s.toUpperCase().split("\\s+");
		return "" + a[0].charAt(0)  + a[1].charAt(0);
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		ArrayList<SanPham> list = new ArrayList<>();
		Map<String, Integer> map = new HashMap<>();
		int t = Integer.parseInt(sc.nextLine());
		while(t-- > 0) {
			String ten = sc.nextLine();
			String ma = taoMa(ten);
			if(map.containsKey(ma)) {
				map.put(ma, map.get(ma) + 1);
				ma = String.format(ma + "%02d", map.get(ma));				
			}
			else {
				map.put(ma, 1);
				ma = ma + "01";
				
			}
			list.add(new SanPham(ma, ten, Long.parseLong(sc.nextLine()), Long.parseLong(sc.nextLine())));
		}
		for(SanPham s : list) {
			System.out.println(s);
		}
	}
}
//3
//May lanh SANYO
//12
//4000000
//Dien thoai Samsung
//30
//3230000
//Dien thoai Nokia
//18
//1240000
