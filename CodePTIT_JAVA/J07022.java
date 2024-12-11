import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class J07022 {
	public static void main(String[] args) throws FileNotFoundException {
		Scanner in = new Scanner(new FileInputStream("DATA.in"));
		ArrayList<String> list = new ArrayList<>();
		while(in.hasNext()) {
			String s = in.next();
			try {
				Integer n = Integer.parseInt(s);
			}
			catch(Exception e) {
				list.add(s);
			}
		}
		Collections.sort(list);
		for(String s : list) {
			System.out.print(s + " ");
		}
	}
}
