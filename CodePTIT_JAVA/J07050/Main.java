package J07050;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) throws FileNotFoundException {
		Scanner sc = new Scanner(new File("MATHANG.in"));
		//Scanner sc = new Scanner(System.in);
		int t = Integer.parseInt(sc.nextLine());
		List<SanPham> list = new ArrayList<>();
		for(int i = 1; i <= t; i++){
			list.add(new SanPham(String.format("MH%02d", i), sc.nextLine(), sc.nextLine(), Double.parseDouble(sc.nextLine()), Double.parseDouble(sc.nextLine())));
		}
		Collections.sort(list);
		for(SanPham s : list) {
			System.out.println(s);
		}
	}
}
//3
//May tinh SONY VAIO
//Dien tu
//16400
//17699
//Tu lanh Side by Side
//Dien lanh
//18300
//25999
//Banh Chocopie
//Tieu dung
//27.5
//37