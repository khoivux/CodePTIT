import java.util.ArrayList;
import java.util.Collections;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;
import java.util.Scanner;

public class JKT013 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-- > 0) {
			int n = sc.nextInt();
			List<Long> list = new ArrayList<>();
			Queue<Long> q = new LinkedList<>();
			q.add(6L);
			q.add(8L);
			while(!q.isEmpty()) {
				Long tmp = q.peek();
				if(tmp.toString().length() <= n) {
					list.add(tmp);
				}
				else 
					break;
				
				q.poll();
				q.add(tmp * 10 + 8);
				q.add(tmp * 10 + 6);
			}
			Collections.sort(list, Collections.reverseOrder());
			System.out.println(list.size());
			for(Long num : list) {
				System.out.print(num + " ");
			}
			System.out.println();
		}
		
	}
}
