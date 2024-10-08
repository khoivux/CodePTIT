package HeDieuHanh;

import java.util.ArrayList;
import java.util.Scanner;

public class Main {
	
	public static void FCFS(int n) {
		Scanner sc = new Scanner(System.in);
		Long p[] = new Long[n + 1];
		for(int i = 1; i <= n; i++) {
			p[i] = sc.nextLong();
		}
		Long wait[] = new Long[n + 1];
		wait[1] = (long) 0;
		Long res = (long) 0;
		for(int i = 2; i <= n; i++) {
			wait[i] = wait[i - 1] + p[i - 1];
			res += wait[i];
		}
		System.out.println(res / n);
	}


	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		FCFS(n);
	}
}
