package J07058;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("MONHOC.in"));
        int n = Integer.parseInt(sc.nextLine());
        ArrayList<Subject> list = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            String maMon = sc.nextLine();
            String tenMon = sc.nextLine();
            String hinhThucThi = sc.nextLine();
            list.add(new Subject(maMon, tenMon, hinhThucThi));
        }

        Collections.sort(list);
        for (Subject e : list) {
            System.out.println(e);
        }
    }
}
