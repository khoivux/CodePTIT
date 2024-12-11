package ThucHanh1;

import java.util.ArrayList;
import java.util.Scanner;

public class Bai1 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		double min = 11;
		double max = -1;
		int cnt = 0;
		ArrayList<Double> list = new ArrayList<>();
		while(t-- > 0) {
			cnt++;
			double n = sc.nextDouble();
			min = Math.min(n, min);
			max = Math.max(n, max);
			list.add(n);
		}
		double sum = 0;
		int cnt2 = 0;
		for(double n : list) {
			if(n != min && n != max) {
				cnt2++;
				sum += n;
			}
				
		}
		System.out.printf("%.2f", sum / cnt2);
	}
}
