import java.util.Scanner;

public class J03004 {
	
	public static String convertName (String s) {
        String[] arr = s.split("\\s+");
        String res = "";
        for(String x : arr) {
        		res += Character.toUpperCase(x.charAt(0));
                for(int i = 1; i < x.length(); i++) {
                    res += Character.toLowerCase(x.charAt(i));
                }
                res += " ";
        }
        return res;
    }
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		sc.nextLine();
		while(t-- > 0) {
			String s = sc.nextLine();
			System.out.println(convertName(s.trim()));
		}
		
	}
}
