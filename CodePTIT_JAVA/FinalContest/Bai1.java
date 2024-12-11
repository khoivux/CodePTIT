package FinalContest;

import java.util.Scanner;

public class Bai1 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String res = "";
		while(sc.hasNext()) {
			String s = sc.next();
			if(s.length() > res.length()) 
				res = s;
		}
		System.out.println(res + " - " +res.length());
	}
}
