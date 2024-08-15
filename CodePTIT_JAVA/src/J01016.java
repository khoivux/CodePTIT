import java.util.Scanner;

public class J01016 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		long n = sc.nextLong();
		int cnt4 = 0, cnt7 = 0;
		while(n != 0) {
			int x = (int) (n % 10);
			if(x == 4) 
				cnt4++;
			else if(x == 7)
				cnt7++;
			n /= 10;
		}
		if(cnt4 + cnt7 == 4 || cnt4 + cnt7 == 7) {
			System.out.println("YES");
		} else {
			System.out.println("NO");
		}
	}
}
