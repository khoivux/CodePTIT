package test;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;
import java.util.Collections;
import java.util.LinkedHashSet;
import java.util.Set;

public class Main {
	public static int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
	// Phải lưu tên package là test
	public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
		ObjectInputStream oi = new ObjectInputStream(new FileInputStream("DATA.in"));
		ArrayList<Pair> list = (ArrayList<Pair>) oi.readObject();
		Collections.sort(list);
		Set<Pair> set = new LinkedHashSet<>();
		for(Pair p : list) {
			if(p.getFirst() < p.getSecond() && gcd(p.getFirst(), p.getSecond()) == 1)
				set.add(p);
		}
		for(Pair p : set) {
			System.out.println(p);
		}
	}
}
