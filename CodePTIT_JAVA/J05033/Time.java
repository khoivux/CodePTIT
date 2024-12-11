package J05033;

public  class Time implements Comparable<Time> {
	private Integer hour, minute, second;

	public Time(Integer hour, Integer minute, Integer second) {
		super();
		this.hour = hour;
		this.minute = minute;
		this.second = second;
	}
	public String toString() {
		return hour + " " + minute + " " + second;
	}
	@Override
	public int compareTo(Time o) {
		if(this.hour != o.hour)
            return this.hour - o.hour;
        else if(this.minute != o.minute)
            return this.minute - o.minute;
        else
            return this.second - o.second;
	}
}
