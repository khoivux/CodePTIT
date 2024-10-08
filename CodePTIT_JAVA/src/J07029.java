import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;

public class J07029 {
	public static boolean isPrime(Integer n) {
		for(int i = 2; i <= Math.sqrt(n); i++) {
			if(n % i == 0) {
				return false;
			}
		}
		return n > 1;
	}
	public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
		ObjectInputStream in = new ObjectInputStream(new FileInputStream("DATA.in"));
		ArrayList<Integer> list = (ArrayList<Integer>) in.readObject();
		int[] a = new int[1000005];
		for(Integer num : list) {
			if(isPrime(num)) {
				a[num]++;
			}
		}
		int cnt = 0;
		for(int i = 1000000; i >= 2; i--) {
			if(a[i] > 0) {
				cnt++;
				System.out.println(i + " " + a[i]);
				if(cnt == 10) break;
			}		
		}
	}
}
