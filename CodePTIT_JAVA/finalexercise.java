import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Date;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Scanner;


public class finalexercise {
	static class Mon {
		private String ma, ten, hinhthuc;

		public Mon(String ma, String ten, String hinhthuc) {
			super();
			this.ma = ma;
			this.ten = ten;
			this.hinhthuc = hinhthuc;
		}
		
		public String getMa() {
			return ma;
		}

		public String getTen() {
			return ten;
		}

		public String getHinhthuc() {
			return hinhthuc;
		}

		public String toString() {
			return ten;
		}
	}
	static class Ca {
		private String ma;
		private Date ngay, gio;
		private String phong;
		public Ca(String ma, Date ngay, Date gio, String phong) {
			super();
			this.ma = ma;
			this.ngay = ngay;
			this.gio = gio;
			this.phong = phong;
		}
		public String getMa() {
			return ma;
		}
		public Date getNgay() {
			return ngay;
		}
		public Date getGio() {
			return gio;
		}
		public String getPhong() {
			return phong;
		}
		public String toString() {
			SimpleDateFormat sdf1 = new SimpleDateFormat("dd/MM/yyyy");
			SimpleDateFormat sdf2 = new SimpleDateFormat("HH:mm");
			return sdf1.format(ngay) + " " + sdf2.format(gio) + " " + phong;
		}
	}
	static class Lich implements Comparable<Lich>{
		private Ca ca;
		private Mon mon;
		private String lop;
		private int sosv;
		public Lich(Ca ca, Mon mon, String lop, int sosv) {
			super();
			this.ca = ca;
			this.mon = mon;
			this.lop = lop;
			this.sosv = sosv;
		}
		public String toString() {
			 return ca.toString() + " " + mon.toString() + " " + lop;
		}
		@Override
		public int compareTo(Lich o) {
			if(this.ca.getNgay().equals(o.ca.getNgay()))
				return this.ca.getGio().compareTo(o.ca.getGio());
			else 
				return this.ca.getNgay().compareTo(o.ca.getNgay());
		}
	}
	public static void main(String[] args) throws NumberFormatException, ParseException {
		Scanner sc = new Scanner(System.in);
		int t = Integer.parseInt(sc.nextLine());
		Map<String, Mon> mon= new HashMap<>();
		Map<String, Ca> ca= new HashMap<>();
		SimpleDateFormat sdf1 = new SimpleDateFormat("dd/MM/yyyy");
		SimpleDateFormat sdf2 = new SimpleDateFormat("HH:mm");
		while(t-- > 0) {
			String ma = sc.nextLine();
			mon.put(ma, new Mon(ma, sc.nextLine(), sc.nextLine()));
		}
		t = Integer.parseInt(sc.nextLine());
		for(int i = 1; i <= t; i++) {
			String ma = String.format("C%03d", i);
			ca.put(ma, new Ca(ma, sdf1.parse(sc.nextLine()), sdf2.parse(sc.nextLine()), sc.nextLine()));
		}
		t = Integer.parseInt(sc.nextLine());
		List<Lich> list = new ArrayList<>(); 
		while(t-- > 0) {
			String maCa = sc.next();
			String maMon = sc.next();
			list.add(new Lich(ca.get(maCa), mon.get(maMon), sc.next(), sc.nextInt()) );
		}
		Collections.sort(list);
		for(Lich l : list) {
			System.out.println(l);
		}
		
	}
}
//2
//MUL1320
//Nhap mon da phuong tien
//Bai tap lon + Van dap truc tuyen
//BAS1203
//Giai tich 1
//Thi viet + Van dap truc tuyen
//2
//09/01/2022
//15:30
//70172
//09/01/2022
//10:00
//70279
//2
//C001 MUL1320 01 46
//C002 BAS1203 04 72
