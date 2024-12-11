package J07046;

import java.io.File;
import java.io.IOException;
import java.time.LocalDate;
import java.time.format.DateTimeFormatter;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;


public class Main {
	public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(new File("KHACH.in"));
        int n = Integer.parseInt(in.nextLine());
        ArrayList<Khach> list = new ArrayList<>();
        for(int i = 1; i <= n; i++){
            DateTimeFormatter dtf = DateTimeFormatter.ofPattern("dd/MM/yyyy");
            list.add(new Khach(String.format("KH%02d", i), in.nextLine(), in.nextLine(), LocalDate.parse(in.nextLine(), dtf), LocalDate.parse(in.nextLine(), dtf)));
        }
        Collections.sort(list);
        for(Khach k : list) {
        	System.out.println(k);
        }
    }
}
//2
//Nguyen Van Hoang
//55B1
//01/01/2021
//05/01/2021
//Nguyen Trung Dung
//04C6
//01/01/2021
//10/01/2021