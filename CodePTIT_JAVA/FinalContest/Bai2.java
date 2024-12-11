package FinalContest;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class Bai2 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = Integer.parseInt(sc.nextLine());
		while(t-- > 0) {
			String s = sc.nextLine();
			int sum = 0;
			List<Character> list = new ArrayList<>();
			for(int i = 0; i < s.length(); i++) {
				if(Character.isDigit(s.charAt(i))) {
					sum += Character.getNumericValue(s.charAt(i));
				}
				else list.add(s.charAt(i));
			}
			Collections.sort(list);
			for(Character c : list) {
				System.out.print(c);
			}
			System.out.println(sum);
		}
	}
}
