package J04007;

import java.util.Scanner;

public class Main {
	public static String convertedDate(String s) {
		StringBuilder sb = new StringBuilder(s);
		if(sb.charAt(2) != '/') sb.insert(0, '0');
		if(sb.charAt(5) != '/') sb.insert(3, '0');
		return sb.toString();
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
		Staff st = new Staff("00001", sc.nextLine(), sc.nextLine(),
							convertedDate(sc.nextLine()), sc.nextLine(),
							sc.nextLine(), convertedDate(sc.nextLine()));
		System.out.println(st);
	}
}
