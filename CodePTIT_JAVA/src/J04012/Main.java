package J04012;

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
		Staff staff = new Staff("NV01", sc.nextLine(), Integer.parseInt(sc.nextLine()),
								Integer.parseInt(sc.nextLine()), sc.nextLine());
		System.out.println(staff);

	}
}
