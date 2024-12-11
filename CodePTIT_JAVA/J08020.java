import java.util.Scanner;
import java.util.Stack;

public class J08020 {
	public static boolean Check(String s) {
        Stack<Character> st = new Stack<>();
        for (int i = 0; i < s.length(); i++) {
            char k = s.charAt(i);
            if (k == ')') {
                if (st.empty() || st.peek() != '(')
                    return false;
                st.pop();
            } else if (k == ']') {
                if (st.empty() || st.peek() != '[')
                    return false;
                st.pop();
            } else if (k == '}') {
                if (st.empty() || st.peek() != '{')
                    return false;
                st.pop();
            } else
                st.push(k);
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            String s = sc.next();
            if (Check(s))
                System.out.println("YES");
            else
                System.out.println("NO");
        }
    }
}
