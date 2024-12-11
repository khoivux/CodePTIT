import java.util.Scanner;

public class J02013 {
	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
		int n = sc.nextInt();
		int arr[] = new int[n];
		for(int i = 0; i < n; i++) {
			arr[i] = sc.nextInt();
		}
		for (int i = 1; i < n; i++) {
			boolean check = true;
	        for(int j = 0; j < n - i; j++)
	        {
	            if(arr[j] > arr[j + 1]) 
	            {
	                int tmp = arr[j];
	                arr[j] = arr[j + 1];
	                arr[j + 1] = tmp;
	                check = false;
	            }
	        }
	        if(check) break;
            System.out.printf("Buoc %d: ", i);
            for (int j = 0; j < n; j++) {
            	System.out.printf("%d ", arr[j]);
            }
            System.out.println();
		}
	}
}
