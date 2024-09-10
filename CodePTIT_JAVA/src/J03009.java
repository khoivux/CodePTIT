import java.util.Scanner;
import java.util.Set;
import java.util.TreeSet;

public class J03009 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		sc.nextLine();
		while(t-- > 0) {
			String a[] = sc.nextLine().split("\\s+");
			String b[] = sc.nextLine().split("\\s+");
			Set<String> set1 = new TreeSet<>(), set2 = new TreeSet<>();
			for(String s : a) {
				set1.add(s);
			}
			for(String s : b) {
				set2.add(s);
			}
			for(String s : set1) {
				if(!set2.contains(s)) {
					System.out.print(s + " ");
				}
			}
			System.out.println();
		}
	}
}
