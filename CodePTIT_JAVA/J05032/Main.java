package J05032;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.time.LocalDate;
import java.time.format.DateTimeFormatter;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) throws ParseException {
		Scanner sc = new Scanner(System.in);
		List<Nguoi> list = new ArrayList<>();
		int n = Integer.parseInt(sc.nextLine());
		SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
		while(n-- > 0) {
//			System.out.println(sc.next());
//			System.out.println(sc.next());
			Nguoi a = new Nguoi(sc.next(), sdf.parse(sc.next()));
			list.add(a);
		}
		Collections.sort(list);
		System.out.println(list.get(0));
		System.out.println(list.get(list.size() - 1));
	}
}

//5
//Nam 01/10/1991
//An 30/12/1990
//Binh 15/08/1993
//Tam 18/09/1990
//Truong 20/09/1990