package J07059;

import java.io.File;
import java.io.FileNotFoundException;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.time.LocalTime;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) throws ParseException, FileNotFoundException {
		Scanner sc = new Scanner(new File("CATHI.in"));
		int t = Integer.parseInt(sc.nextLine());
		List<CaThi> list = new ArrayList<>();
		SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
		for(int i = 1; i <= t; i++) {
			list.add(new CaThi(String.format("C%03d", i), sdf.parse(sc.nextLine()), LocalTime.parse(sc.nextLine()), sc.nextLine()) );
		}
		Collections.sort(list);
		for(CaThi ca : list) {
			System.out.println(ca);
		}
	}
}
//2
//09/01/2022
//15:30
//70172
//09/01/2022
//10:00
//70279
