import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;
import java.util.Collections;

public class J07031 {
	public static boolean isPrime(int n) {
		for(int i = 2; i <= Math.sqrt(n); i++) {
			if(n % i == 0) {
				return false;
			}
		}
		return n > 1;
	}
	public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
		ObjectInputStream in1 = new ObjectInputStream(new FileInputStream("DATA1.in"));
		ObjectInputStream in2 = new ObjectInputStream(new FileInputStream("DATA2.in"));
		ArrayList<Integer> list1 = (ArrayList<Integer>) in1.readObject();
		in1.close();
		ArrayList<Integer> list2 = (ArrayList<Integer>) in2.readObject();
		Collections.sort(list1);
		int[] a = new int[1000004];
		for(int n : list1) {
			if(!isPrime(n) || a[n] > 0 || list2.contains(n)) continue;
			
			int m = 1000000 - n;
			if(isPrime(m) && n < m && list1.contains(m) && !list2.contains(m)) {
				System.out.println(n + " " + m);
				a[n]++;
			}
		}
	}
}
