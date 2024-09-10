package J05033;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;
import java.util.Scanner;

public class Main {
	public static void sortTime(List<Time> list) {
		Collections.sort(list, new Comparator<Time>() {
            @Override
            public int compare(Time o1, Time o2) {
                if(o1.getHour() != o2.getHour())
                    return o1.getHour() - o2.getHour();
                else if(o1.getMinute() != o2.getMinute())
                    return o1.getMinute() - o2.getMinute();
                else
                    return o1.getSecond() - o2.getSecond();
            }
        });
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
		int t = sc.nextInt();
		List<Time> list = new ArrayList<>();
		while(t-- > 0) {
			Time time = new Time(sc.nextInt(), sc.nextInt(), sc.nextInt());
			list.add(time);
		}
		sortTime(list);
		for(Time time : list) {
			System.out.println(time);
		}
	}
}
