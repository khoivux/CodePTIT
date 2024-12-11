import java.util.Scanner;

public class J03032 {
	 public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while (t-- > 0) {
            String[] ar = sc.nextLine().trim().split("\\s+");
            for (String i : ar) {
                System.out.print(new StringBuilder(i).reverse().toString() + " ");
            }
            System.out.println();
        }
	 }
}
