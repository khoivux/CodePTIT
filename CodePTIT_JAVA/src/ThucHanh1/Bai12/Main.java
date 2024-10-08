package ThucHanh1.Bai12;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) throws FileNotFoundException {
		ArrayList<Student> students = new ArrayList<>();
		ArrayList<Topic> topics = new ArrayList<>();
		ArrayList<Mission> missions = new ArrayList<>();
		
		Scanner in = new Scanner (new FileInputStream("SINHVIEN.in"));
		int t = Integer.parseInt(in.nextLine());
		while(t-- > 0) {
			Student s = new Student(in.nextLine(), in.nextLine(), in.nextLine(), in.nextLine());
			students.add(s);
		}
		
		in = new Scanner (new FileInputStream("DETAI.in"));
		t = Integer.parseInt(in.nextLine());
		while(t-- > 0) {
			Topic tp = new Topic(in.nextLine(), in.nextLine());
			topics.add(tp);
		}

		in = new Scanner (new FileInputStream("NHIEMVU.in"));
		t = Integer.parseInt(in.nextLine());
		while(t-- > 0) {
			String s[] = in.nextLine().split("\\s+");
			Mission m = new Mission(s[0], s[1]);
			for(Student st : students) {
				if(m.getStudentId().equals(st.getId())) {
					m.setStudent(st);
				}
			}
			for(Topic tp : topics) {
				if(m.getTopicId().equals(tp.getId())) {
					m.setTopic(tp);
				}
			}
			missions.add(m);	
		}
		Collections.sort(missions);
		for(Mission m : missions) {
			System.out.println(m);
		}
	}
}
