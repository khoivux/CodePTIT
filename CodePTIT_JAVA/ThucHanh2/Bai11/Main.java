package ThucHanh2.Bai11;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) throws FileNotFoundException {
//		Scanner in = new Scanner(System.in);
		Scanner in = new Scanner(new File("INSTITUTION.in"));
		ArrayList<Team> list = new ArrayList<>();
		Map<String, Truong> listTruong = new HashMap<>();
		int t = Integer.parseInt(in.nextLine());
		while(t-- > 0) {
			String a[] = in.nextLine().split("\\s+");
			String ten = "";
			for(int i = 1; i < a.length; i++) {
				ten += a[i] + " ";
			}
			listTruong.put(a[0], new Truong(a[0], ten));
		}
		in = new Scanner(new File("REGISTER.in"));
		t = Integer.parseInt(in.nextLine());
		for(int i = 1; i <= t; i++) {
			String tmp[] = in.nextLine().split("\\s+");
			String maTr = tmp[0];
			Integer cnt = Integer.parseInt(tmp[1]);
			while(cnt-- > 0) {
				list.add(new Team(in.nextLine(), listTruong.get(maTr)));
			}
		}
		Collections.sort(list);
		int cnt = 0;
		for(Team team : list) {
			cnt++;
			team.setMa(String.format("team%02d", cnt));
			System.out.println(team);
		}
	}
}
//2
//PSA People's Security Academy
//NEU National Economics University
//2
//PSA 2
//PSA_G63
//PSA_HTK
//NEU 2
//NEU_ONE
//NEU_TWO