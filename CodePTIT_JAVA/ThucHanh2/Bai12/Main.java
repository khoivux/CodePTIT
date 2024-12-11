package ThucHanh2.Bai12;

import java.sql.Time;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) throws ParseException {
		Scanner in = new Scanner (System.in);
		Map<String, MonHoc> mon = new HashMap<>();
		Map<String, CaThi> ca = new HashMap<>();
		ArrayList<LichThi> lich = new ArrayList<>();
		int t = Integer.parseInt(in.nextLine());
		for(int i = 1; i <= t; i++) {
			String ma = in.nextLine();
			mon.put(ma, new MonHoc(ma, in.nextLine(), in.nextLine()));
		}
		
		SimpleDateFormat dateFormat = new SimpleDateFormat("dd/MM/yyyy");
		SimpleDateFormat timeFormat = new SimpleDateFormat("HH:mm");
		t = Integer.parseInt(in.nextLine());
		for(int i = 1; i <= t; i++) {
			String ma = String.format("CA%03d", i);
			ca.put(ma, new CaThi(ma, dateFormat.parse(in.nextLine()), Time.valueOf(in.nextLine()),in.nextLine()));
		}
		
		t = Integer.parseInt(in.nextLine());
		for(int i = 1; i <= t; i++) {
			String a[] = in.nextLine().split("\\s+");
			lich.add(new LichThi(a[2], a[3], mon.get(a[1]), ca.get(a[0])));
		}
	}
}
