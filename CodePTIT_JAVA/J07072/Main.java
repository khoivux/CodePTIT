package J07072;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class Main {
	public static String convert(String s) {
		String a[] = s.toLowerCase().trim().split("\\s+");
		String res = "";
		for(int i = 0; i < a.length; i++) {
			res += Character.toUpperCase(a[i].charAt(0));
			res += a[i].substring(1);
			if(i < a.length - 1) res += " ";
		}
		return res;
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = 4;
		List<String> list = new ArrayList<>();
		while(t-- > 0) {
			list.add(convert(sc.nextLine()));
		}
		Collections.sort(list);
		for(String ten : list) {
			System.out.println(ten);
		}
	}
}
//nguyEn    ManH   son
//ngo MINH                 tuAn
//       nguyen manh hung
//TRAN TRUNG DUNG
