import java.math.BigInteger;
import java.util.Scanner;

public class J03024 {
	
	public static int valid(String s) {
		if(s.charAt(0) == '0' ) 
			return 0;
		int cntOdd = 0, cntEven = 0;
		for(int i = 0; i < s.length(); i++) {
			if(!Character.isDigit(s.charAt(i)))
				return 0;
			int x = s.charAt(i) - '0';
			if(x % 2 == 0)
				cntEven++;
			else
				cntOdd++;
		}
		if(s.length() % 2 == 0 && cntEven > cntOdd)
			return 2;
		if(s.length() % 2 == 1 && cntOdd > cntEven)
			return 2;
		return 1;
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
		int t = sc.nextInt();
		sc.nextLine();
		while(t-- > 0) {
			String s = sc.nextLine();
			if(valid(s) == 0) 
				System.out.println("INVALID");
			else if(valid(s) == 1)
				System.out.println("NO");
			else 
				System.out.println("YES");
		}
	}
}
