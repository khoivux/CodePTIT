import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Scanner;

public class J02007 {
	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
		int t = sc.nextInt();
		int test = 0;
		while(t-- > 0) {
			test++;
			int n =  sc.nextInt();
			Map<Integer, Integer> map = new LinkedHashMap<>();
			for(int i = 1; i <= n; i++) {
				int a = sc.nextInt();
				if(map.containsKey(a)) {
					map.put(a, map.get(a) + 1);
				} 
				else {
					map.put(a, 1);
				}
			}
			System.out.printf("Test %d:\n", test);
			for(Map.Entry<Integer, Integer> entry : map.entrySet()) {
				System.out.printf("%d xuat hien %d lan\n", entry.getKey(), entry.getValue());
			}
		}
	}
}
