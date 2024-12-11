import java.util.Scanner;

public class J02101 {
	public static void main(String[] args) {
		 Scanner sc = new Scanner (System.in);
		 int t = sc.nextInt();
		 while(t-- > 0) {
			 int n = sc.nextInt();
			 int a[][] = new int[n + 1][n + 1];
			 for(int i = 1; i <= n; i++) {
				 for(int j = 1; j <= n; j++) {
					 a[i][j] = sc.nextInt();
				 }
			 }
			 int col = 1, row = 1;
			 while(row <= n) {
				 if(col == 1) {
					 while(col <= n) {
						 System.out.print(a[row][col] + " ");
						 col++;
					 }
					 col--;
				 } 
				 else if(col == n) {
					 while(col >= 1) {
						 System.out.print(a[row][col] + " ");
						 col--;
					 }
					 col++;
				 }
				 row++;
			 }
			 System.out.println();
		 }
	}
}
