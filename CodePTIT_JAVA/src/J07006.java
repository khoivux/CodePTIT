import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;

public class J07006 {
	public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
		ObjectInputStream ois = new ObjectInputStream(new FileInputStream("DATA.in"));
		ArrayList<Integer> list = (ArrayList<Integer>) ois.readObject();
		int[] a = new int[1000];
		for(Integer num : list) {
			a[num]++;
		}
		for(int i = 0; i < 1000; i++) {
			if(a[i] > 0) {
				System.out.println(i + " " + a[i]);
			}
		}
	}
}