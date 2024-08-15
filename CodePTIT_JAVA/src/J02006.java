import java.util.Scanner;
import java.util.Set;
import java.util.TreeSet;

public class J02006 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt(), m = sc.nextInt();
		Set<Integer> A = new TreeSet<>();
		for(int i = 1; i <= n; i++) {
			A.add(sc.nextInt());
		}
		for(int i = 1; i <= m; i++) {
			A.add(sc.nextInt());
		}
		for(Integer num : A) {
			System.out.print(num + " ");
		}
	}
}
