package ThucHanh2.Bai4;

import java.util.ArrayList;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		ArrayList<Pair<Integer, Integer>> list = new ArrayList<>();
		int m[][] = new int[n + 5][n + 5];
		for(int i = 1; i <= n; i++) {
			for(int j = 1; j <= n; j++) {
				m[i][j] = sc.nextInt();
				if(i < j && m[i][j] == 1) {
					list.add(new Pair(i, j));
				}
			}
		}
		for(Pair<Integer, Integer> p : list) {
			System.out.println(p);
		}
	}
}
//6
//0 1 1 0 1 0
//1 0 1 0 1 0
//1 1 0 1 0 0
//0 0 1 0 1 1
//1 1 0 1 0 1
//0 0 0 1 1 0