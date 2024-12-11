package FinalContest;

import java.util.Scanner;
import java.util.Stack;

public class Bai5 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = Integer.parseInt(sc.nextLine());
		while(t-- > 0) {
			String a[] = sc.nextLine().split("\\s+");
			Stack<String> st = new Stack<>();
			for(int i = 0; i < a.length; i++) 
			{
				st.push(a[i]);
			}
			while(!st.isEmpty()) {
				System.out.print(st.pop() + " ");
			}
			System.out.println();
		}
	}
}

