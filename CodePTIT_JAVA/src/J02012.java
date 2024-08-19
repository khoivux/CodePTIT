import java.util.Scanner;

public class J02012 {
	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
		int n = sc.nextInt();
		int arr[] = new int[n];
		for(int i = 0; i < n; i++) {
			arr[i] = sc.nextInt();
		}
		for(int i = 0; i < n; i++) {
	        int tmp = arr[i];
	        int pos = i - 1;
	        while(pos >= 0 && tmp < arr[pos]) {
	            arr[pos + 1] = arr[pos];
	            pos--;
	        }
	        arr[pos + 1] = tmp;
	        System.out.printf("Buoc %d: ", i);
	        for(int j = 0; j <= i; j++) {
	            System.out.print(arr[j] + " ");
	        }
	        System.out.println();
	    }
	}
}
