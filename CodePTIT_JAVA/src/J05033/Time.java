package J05033;

public class Time {
	private Integer hour, minute, second;

	public Time(Integer hour, Integer minute, Integer second) {
		super();
		this.hour = hour;
		this.minute = minute;
		this.second = second;
	}
	public Integer getHour() {
		return hour;
	}

	public Integer getMinute() {
		return minute;
	}

	public Integer getSecond() {
		return second;
	}

	public String toString() {
		return hour + " " + minute + " " + second;
	}
}
