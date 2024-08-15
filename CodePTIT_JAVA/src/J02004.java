import java.util.Scanner;

public class J02004 {
	
	public static boolean reversed(int arr[], int n) {
		int l = 1, r = n;
		while(l <= r) {
			if(arr[l] != arr[r]) {
				return false;
			}
			else {
				l++;
				r--;
			}
		}
		return true;
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
		int t = sc.nextInt();
		while(t-- > 0) {
			int n = sc.nextInt();
			int arr[] = new int[n + 1];
			for(int i = 1; i <= n; i++) {
				arr[i] = sc.nextInt();
			}
			if(reversed(arr, n)) {
				System.out.println("YES");
			} 
			else {
				System.out.println("NO");
			}
		}
 	}
}
