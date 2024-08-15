import java.util.Scanner;

public class J01005 {
	public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            double n = sc.nextDouble(), k = sc.nextDouble();
            for (int i = 1; i < n; i++) {
                double h = Math.sqrt(i / n) * k;
                System.out.printf("%.6f ", h);
            }
            System.out.println();
        }
    }
}
