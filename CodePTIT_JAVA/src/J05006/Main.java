package J05006;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) throws ParseException {
		Scanner sc = new Scanner (System.in);
		int t = sc.nextInt();
		int cnt = 1;
		sc.nextLine();
		SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
		while(t-- > 0) {
			Staff staff = new Staff(String.format("%05d", cnt), sc.nextLine(), sc.nextLine(),
					sdf.format(sdf.parse(sc.nextLine())), sc.nextLine(), sc.nextLine(), sdf.format(sdf.parse(sc.nextLine())));
			System.out.println(staff);
			cnt++;
		}
	}
}
