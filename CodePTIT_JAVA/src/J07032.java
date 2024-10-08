import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;
import java.util.Collections;

public class J07032 {
	public static boolean check(Integer n) {
		String s = n.toString();
		StringBuilder tmp = new StringBuilder(s);
		if(!tmp.reverse().toString().equals(s)) 
			return false;
		if(tmp.length() == 1 || tmp.length() % 2 == 0)
			return false;
		for(int i = 0; i < s.length(); i++) {
			int x = (int)s.charAt(i);
			if(x % 2 == 0)
				return false;
		}
		return true;
	}
	public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
		ObjectInputStream in1 = new ObjectInputStream(new FileInputStream("DATA1.in"));
		ObjectInputStream in2 = new ObjectInputStream(new FileInputStream("DATA2.in"));
		ArrayList<Integer> list1 = (ArrayList<Integer>) in1.readObject();
		in1.close();
		ArrayList<Integer> list2 = (ArrayList<Integer>) in2.readObject();
		Collections.sort(list1);
		
		int[] a = new int[1000004];
		for(int num : list1) {
			if(check(num)) {
				a[num]++;
			}
		}
		for(int num : list2) {
			if(check(num)) {
				a[num]++;
			}
		}
		int cnt = 0;
		for(int n = 0; n <= 1000000; n++) {
			if(list1.contains(n) && list2.contains(n)) {
				cnt++;
				System.out.println(n + " " + a[n]);
			}
			if(cnt == 10)
				break;
		}
	}
}
