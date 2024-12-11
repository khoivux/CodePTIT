import java.util.Scanner;

public class J02010 {
	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
		int n = sc.nextInt();
		int arr[] = new int[n];
		for(int i = 0; i < n; i++) {
			arr[i] = sc.nextInt();
		}
		for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] > arr[j]) {
                    int tmp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = tmp;
                }
            }
            System.out.printf("Buoc %d: ", i + 1);
            for (int j = 0; j < n; j++) {
            	System.out.printf("%d ", arr[j]);
            }
            System.out.println();
		}
	}
}
