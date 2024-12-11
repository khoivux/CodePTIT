import java.io.File;
import java.io.FileNotFoundException;
import java.math.BigInteger;
import java.util.Scanner;

public class J07002 {
	public static void main(String[] args) throws FileNotFoundException{
		Scanner in = new Scanner(new File("DATA.in"));
		BigInteger n = in.nextBigInteger();
		while(true) {
			String s = n.toString();
			if(s.length() == 1) 
			    break;
			int mid = s.length() / 2;
			BigInteger a = new BigInteger(s.substring(0, mid));
			BigInteger b = new BigInteger(s.substring(mid));
			n = a.add(b);
			System.out.println(n);
		}
	}
}