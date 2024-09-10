import java.util.Scanner;

public class J03005 {
	public static String convertName (String s) {
        String[] arr = s.split("\\s+");
        String res = "";
        for(int i = 1; i < arr.length; i++) {
        		String x = arr[i];
        		res += Character.toUpperCase(x.charAt(0));
                for(int j = 1; j < x.length(); j++) {
                    res += Character.toLowerCase(x.charAt(j));
                }
                if(i < arr.length - 1) res += " ";
        }
        return res + ", " + arr[0].toUpperCase();
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
