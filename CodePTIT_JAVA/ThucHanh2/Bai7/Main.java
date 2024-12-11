package ThucHanh2.Bai7;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class Main {
	public static void main(String[] args) throws FileNotFoundException {
		Scanner in = new Scanner(new FileInputStream("MONHOC.in"));
		ArrayList<MonHoc> list = new ArrayList<>();
		Set<String> set = new HashSet<>();
		while(in.hasNext()) {
			MonHoc m = new MonHoc(in.nextLine(), in.nextLine(), in.nextLine());
			if(!set.contains(m.getMaMon())) {
				set.add(m.getMaMon());
				list.add(m);
			}
		}
		Collections.sort(list);
		for(MonHoc m : list) {
			System.out.println(m);
		}
	}
}

