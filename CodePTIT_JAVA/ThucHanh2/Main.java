package ThucHanh2;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
		Scanner sc = new Scanner(new File("DATA.in"));
		long res = 0;
		while(sc.hasNext()) {
			String s = sc.next();
			try {
				Long n = Long.parseLong(s);
				try {
					Integer n1 = Integer.parseInt(s);
					continue;
				} catch(NumberFormatException e) {
					res += n;
				}
			} catch(NumberFormatException e) {
				continue;
			}
		}
		System.out.println(res);
	}
}