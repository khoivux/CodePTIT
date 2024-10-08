import java.io.File;
import java.io.FileNotFoundException;
import java.math.BigInteger;
import java.util.Map;
import java.util.Scanner;
import java.util.TreeMap;

public class J07004 {
	public static void main(String[] args) throws FileNotFoundException{
		Scanner in = new Scanner(new File("DATA.in"));
		Map<Integer, Integer> map = new TreeMap<>();
		Scanner sc = new Scanner(System.in);
		while(in.hasNext()) {
			int n = in.nextInt();
			if(!map.containsKey(n)) {
				map.put(n, 1);
			}
			else {
				map.put(n, map.get(n) + 1);
			}
		}
		for (Map.Entry<Integer, Integer> entry : map.entrySet()){
			System.out.println(entry.getKey() + " " + entry.getValue());
		}
	}
}