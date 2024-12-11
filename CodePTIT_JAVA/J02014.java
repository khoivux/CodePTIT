import java.util.Scanner;

public class J02014 {
	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
		int t = sc.nextInt();
		while(t-- > 0) {
			int n = sc.nextInt();
			int arr[] = new int[n + 2];
			int sumLeft[] = new int[n + 2], sumRight[] = new int[n + 2];
			for(int i = 1; i <= n; i++) {
				arr[i] = sc.nextInt();
			}
			for(int i = 1; i <= n; i++) {
				sumLeft[i] = sumLeft[i - 1] + arr[i];
			}
			for(int i = n; i >= 1; i--) {
				sumRight[i] = sumRight[i + 1] + arr[i];
			}
			boolean check = false;
			for(int i = 1; i <= n; i++) {
				if(sumRight[i] == sumLeft[i]) {
					System.out.println(i);
					check = true;
					break;
				}
			}
			if(!check) {
				System.out.println(-1);
			}
		}
	}
}
