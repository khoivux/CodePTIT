package ThucHanh1.Bai12;

public class Mission implements Comparable<Mission>{
	private String studentId, topicId;
	private Topic topic;
	private Student student;
	public Mission(String studentId, String topicId) {
		super();
		this.studentId = studentId;
		this.topicId = topicId;
	}
	
	public String getTopicId() {
		return topicId;
	}
	public String getStudentId() {
		return studentId;
	}

	public void setStudent(Student student) {
		this.student = student;
	}
	public void setTopic(Topic topic) {
		this.topic = topic;
	}
	
	public String getTopicName() {
		return this.topic.getName();
	}
	public String toString() {
		return student.toString() + " " + topic.toString();
	}

	@Override
	public int compareTo(Mission o) {
		return getTopicName().compareTo(o.getTopicName());
	}
}
