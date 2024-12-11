package J07052;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) throws FileNotFoundException {
        Scanner scanner = new Scanner(new File("THISINH.in"));
        int t = Integer.parseInt(scanner.nextLine());
        List<Student> students = new ArrayList<>();
        while (t-- > 0) {
            students.add(new Student(scanner.nextLine(), scanner.nextLine(),
                    Double.parseDouble(scanner.nextLine()), Double.parseDouble(scanner.nextLine()), Double.parseDouble(scanner.nextLine())));
        }
        Collections.sort(students);

        int n = Integer.parseInt(scanner.nextLine());
        double mark = students.get(n - 1).getSumMark();

        for (Student student : students) {
            if (student.getSumMark() >= mark) {
                student.setStatus("TRUNG TUYEN");
            } else {
                student.setStatus("TRUOT");
            }
        }

        System.out.println(String.format("%.1f", mark));
        for (Student student : students) {
            System.out.println(student);
        }
    }
}
