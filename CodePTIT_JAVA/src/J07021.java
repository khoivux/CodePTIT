import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class J07021 {
	public static void main(String[] args) throws FileNotFoundException {
		Scanner in = new Scanner(new FileInputStream("DATA.in"));
		while(in.hasNext()) {
			String s = in.nextLine();
			if(s.equals("END")) break;
			String[] a = s.trim().split("\\s+");
			String res = "";
			for(int i = 0; i < a.length; i++) {
				res += Character.toUpperCase(a[i].charAt(0))
						+ a[i].substring(1).toLowerCase() + " ";
			}
			System.out.println(res.trim());
		}
	}
}
