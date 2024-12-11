package ThucHanh2;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.math.BigInteger;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

import ThucHanh2.Bai7.MonHoc;

public class Bai8 {
	public static void main(String[] args) throws FileNotFoundException {
		Scanner in = new Scanner(new FileInputStream("DAYSO.in"));

		ArrayList<BigInteger> list = new ArrayList<>();
		int t = Integer.parseInt(in.nextLine());
		BigInteger sum = BigInteger.ZERO;
		while(t-- > 0) {
			
			BigInteger tmp = new BigInteger(in.nextLine());
			list.add(tmp);
			sum = sum.add(tmp);
			//System.out.println(tmp.toString());
		}
		System.out.println(Collections.min(list).toString());
		System.out.println(Collections.max(list).toString());
		System.out.println(sum.toString());
	}
}
//5
//213
//2435
//653224
//34326
//6467 
