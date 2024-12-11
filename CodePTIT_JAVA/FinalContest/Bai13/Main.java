package FinalContest.Bai13;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) throws ParseException {
		Scanner sc = new Scanner(System.in);
		int t = Integer.parseInt(sc.nextLine());
		SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy hh:mm:ss");
		List<Sinhvien> list = new ArrayList<>();
		while(t-- > 0) {
			list.add(new Sinhvien(sc.nextLine(), sdf.parse(sc.nextLine()), sdf.parse(sc.nextLine())));;
		}
		Collections.sort(list);
		for(Sinhvien s : list) {
			System.out.println(s);
		}
	}
}
//3
//Do Viet Anh
//11/12/2021 16:35:00
//11/12/2021 17:35:00
//Le Tuan Anh
//11/12/2021 16:45:00
//11/12/2021 18:15:00
//Nguyen Tuan Anh
//11/12/2021 17:00:00
//11/12/2021 19:15:00