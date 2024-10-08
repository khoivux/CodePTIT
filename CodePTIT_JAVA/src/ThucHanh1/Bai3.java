package ThucHanh1;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.math.BigInteger;
import java.util.Scanner;

public class Bai3 {
	public static void main(String[] args) throws FileNotFoundException {
		//Scanner in = new Scanner(System.in);
		Scanner in = new Scanner(new FileInputStream("DATA.in"));
		BigInteger a = new BigInteger("0");
		while(in.hasNext()) {
			String s = in.next();
			
			try {
				int n = Integer.parseInt(s);
			}
			catch(Exception e1) {
				try {
					Long n = Long.parseLong(s);
					BigInteger b = new BigInteger(s);
					a = a.add(b);
				} catch(Exception e2) {
					continue;
				}
			}
		}
		System.out.println(a.toString());
	}
}
