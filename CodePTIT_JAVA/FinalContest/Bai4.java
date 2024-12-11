package FinalContest;

import java.util.Scanner;

public class Bai4 {
	public static Long tich(String s) {
		Long res = 1L;
		for(int i = 0; i < s.length(); i++) {
			int n = Character.getNumericValue(s.charAt(i));
			if(i % 2 == 0 && n != 0) 
				res *= n;
		}
		return res;
	}
	public static Long tong(String s) {
		Long res = 0L;
		for(int i = 0; i < s.length(); i++) {
			int n = Character.getNumericValue(s.charAt(i));
			if(i % 2 != 0) 
				res += n;
		}
		return res;
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = Integer.parseInt(sc.nextLine());
		while(t-- > 0) {
			String s = sc.nextLine();
			System.out.println(tich(s) + " " +tong(s));
		}
	}
}
//3
//12345678
//20000
//22334455667788