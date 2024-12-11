package FinalContest;

import java.time.LocalTime;
import java.time.format.DateTimeFormatter;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashSet;
import java.util.List;
import java.util.Scanner;
import java.util.Set;

public class Bai10 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = 20;
		Set<LocalTime> set = new HashSet<>(); 
		DateTimeFormatter formatter = DateTimeFormatter.ofPattern("HH:mm:ss");
		while(sc.hasNext()) {
			String s = sc.next();
			if(Character.isDigit(s.charAt(0))) {
				try {
					LocalTime time = LocalTime.parse(s.substring(0, 8), formatter);
					if(!set.contains(time))
						set.add(time);
				} catch(Exception e) {
					continue;
				}
			}
		}
		List<LocalTime> list = new ArrayList<>();
		for(LocalTime time : set) {
			list.add(time);
		}
		Collections.sort(list);
		for(LocalTime time : list) {
			System.out.println(time.format(formatter));
		}
	}
}
