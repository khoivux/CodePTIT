package ThucHanh1;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;

public class Bai4 {
	public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
		ObjectInputStream in = new ObjectInputStream(new FileInputStream("DATA.in"));
		ArrayList<String> list = (ArrayList<String>) in.readObject();
		for(String s : list) {
			String num = "";
			for(int i = 0; i < s.length(); i++) {
				if(s.charAt(i) == '0' || s.charAt(i) == '1') 
					num += s.charAt(i);
			}
			Long so = Long.parseLong(num, 2);
			System.out.println(num + " " + so);
		}
	}
}
