package J05033;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
		int t = sc.nextInt();
		List<Time> list = new ArrayList<>();
		while(t-- > 0) {
			Time time = new Time(sc.nextInt(), sc.nextInt(), sc.nextInt());
			list.add(time);
		}
		Collections.sort(list);
		for(Time time : list) {
			System.out.println(time);
		}
	}
}
