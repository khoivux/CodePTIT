import java.util.Arrays;
import java.util.List;

public class test {
	public static void main(String[] args) {
		List<String> a = Arrays.asList("Java", "Python", "C++");;
		for(String t : a) {
			t = "'" + t + "'";
			System.out.println(t);
		}
		for(String t : a) {
			System.out.println(t);
		}
	}
}
