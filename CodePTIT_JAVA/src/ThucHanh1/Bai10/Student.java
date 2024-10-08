package ThucHanh1.Bai10;

import java.util.Date;
import java.util.concurrent.TimeUnit;

public class Student implements Comparable<Student>{
	private String name;
	private Date begin, end;
	private long time;
	public Student(String name, Date begin, Date end) {
		super();
		this.name = name;
		this.begin = begin;
		this.end = end;
		long times = end.getTime() - begin.getTime();
		this.time = TimeUnit.MILLISECONDS.toMinutes(times);
	}
	@Override
	public int compareTo(Student o) {
		if(time == o.time) {
			return name.compareTo(o.name);
		}
		else return (int) (o.time - time);
	}
	public String toString() {
		return name + " " + time;
	}
} 
