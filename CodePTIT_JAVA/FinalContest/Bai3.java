package FinalContest;

import java.util.Scanner;

public class Bai3 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-- > 0) {
			Long n = sc.nextLong();
			Long res = 0L;
			for(Long i = 2L; i <= Math.sqrt(n); i++) {
				if(n % i == 0) {
					res = i;
					while(n % i == 0) 
						n /= i;
				}
			}
			if(n > 1) res = n;
			System.out.println(res);
		}
	}
}
