package ThucHanh2;

import java.util.Scanner;
import java.util.Set;
import java.util.TreeSet;

public class Bai1 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt(), m = sc.nextInt();
		Set<Integer> a = new TreeSet<>();
		Set<Integer> b = new TreeSet<>();
		for(int i = 0; i < n; i++) {
			a.add(sc.nextInt());
		}
		for(int i = 0; i < m; i++) {
			b.add(sc.nextInt());
		}
		for(Integer num : a) {
			if(b.contains(num)) 
				System.out.print(num + " ");
		}
		System.out.println();
		for(Integer num : a) {
			if(!b.contains(num)) 
				System.out.print(num + " ");
		}
		System.out.println();
		for(Integer num : b) {
			if(!a.contains(num)) 
				System.out.print(num + " ");
		}
	}
}
//5 6
//1 2 3 4 5
//3 4 5 6 7 8