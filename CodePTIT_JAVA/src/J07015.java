import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;

public class J07015 {
	public static boolean isPrime(Integer n) {
		for(int i = 2; i <= Math.sqrt(n); i++) {
			if(n % i == 0) {
				return false;
			}
		}
		return n > 1;
	}
	public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
		ObjectInputStream in = new ObjectInputStream(new FileInputStream("SONGUYEN.in"));
		ArrayList<Integer> list = (ArrayList<Integer>) in.readObject();
		int[] a = new int[10001];
		for(Integer num : list) {
			if(isPrime(num)) {
				a[num]++;
			}
		}
		for(int i = 2; i < 10000; i++) {
			if(a[i] > 0) {
				System.out.println(i + " " + a[i]);
			}
		}
	}
}
