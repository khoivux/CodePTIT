package ThucHanh3.Bai2;

import java.time.LocalTime;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = Integer.parseInt(sc.nextLine());
		List<Nguoi> list = new ArrayList<>();
		while(t-- > 0) {
			Nguoi n = new Nguoi(sc.nextLine(), sc.nextLine(), LocalTime.parse(sc.nextLine()), LocalTime.parse(sc.nextLine()));
			list.add(n);
		}
		Collections.sort(list);
		for(Nguoi n : list) {
			System.out.println(n);
		}
	}
}
//2
//01T
//Nguyen Van An
//08:00
//17:30
//06T
//Tran Hoa Binh
//09:05
//17:00
