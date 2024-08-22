import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Scanner;
import java.util.Set;

public class J02034 {
	public static void main(String[] args) {
		 Scanner sc = new Scanner(System.in);
		 int n = sc.nextInt();
		 int max = -1;
		 Set<Integer> set = new HashSet<>();
		 List<Integer> list = new ArrayList<>();
		 for(int i = 1; i <= n; i++) {
			 int x = sc.nextInt();
			 max = Math.max(x, max);
			 set.add(x);
		 }
		 for(int i = 1; i <= max; i++) {
			 if(!set.contains(i)) {
				 list.add(i);
			 }
		 }
		 if(list.size() == 0) {
			 System.out.println("Excellent!");
		 } 
		 else {
			 for(Integer item : list) {
				 System.out.println(item);
			 }
		 }
	}
}
