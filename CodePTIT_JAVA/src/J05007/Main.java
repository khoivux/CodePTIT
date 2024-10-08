package J05007;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) throws ParseException {
		Scanner sc = new Scanner (System.in);
		int t = sc.nextInt();
		int cnt = 1;
		sc.nextLine();
		ArrayList<Staff> list = new ArrayList<>();
		SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
		while(t-- > 0) {
			Staff staff = new Staff(String.format("%05d", cnt), sc.nextLine(), sc.nextLine(),
					sdf.parse(sc.nextLine()), sc.nextLine(), sc.nextLine(), sdf.parse(sc.nextLine()));
			list.add(staff);
			cnt++;
		}
		Collections.sort(list);
		for(Staff staff : list) {
			System.out.println(staff);
		}
	}
}
