import java.util.Scanner;

public class J02020 {
	public static int n, k, a[] = new int[50], cnt = 0;
	
	public static void display() {
		cnt++;
		for(int i = 1; i <= k; i++) {
		  System.out.print(a[i] + " ");
		}
		System.out.println();
	}
	
	public static void Try(int i) {
		for(int j = a[i - 1] + 1; j <= n - k + i; j++) {
			a[i] = j;
			if(i == k) 
				display();
			else
				Try(i + 1);
		}
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
		n = sc.nextInt();
		k = sc.nextInt();
		for(int i = 1; i <= k; i++) {
			a[i] = i;
		}
		Try(1);
		System.out.printf("Tong cong co %d to hop", cnt);
	}
}
