import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class HELLOFILE {
	public static void main(String[] args) throws FileNotFoundException {
		Scanner sc = new Scanner(new File("Hello.txt"));
        while (sc.hasNextLine())
            System.out.println(sc.nextLine());
	}
}
