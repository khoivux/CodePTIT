import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class J08024 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-- > 0) {
			int n = sc.nextInt();
			Queue<Integer> q = new LinkedList<>();
			q.add(9);
			while(!q.isEmpty()) {
				int tmp = q.peek();
				if(tmp % n == 0) {
					System.out.println(tmp);
					break;
				}
				q.poll();
				q.add(tmp * 10);
				q.add(tmp * 10 + 9);
			}
		}
		
	}
}
