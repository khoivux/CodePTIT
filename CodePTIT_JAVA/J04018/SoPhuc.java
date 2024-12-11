package J04018;

public class SoPhuc {
	private int thuc, ao;

	public SoPhuc(int thuc, int ao) {
		super();
		this.thuc = thuc;
		this.ao = ao;
	}
	public SoPhuc tong(SoPhuc a) {
		return new SoPhuc(this.thuc + a.thuc, this.ao + a.ao);
	}
	public SoPhuc tich(SoPhuc a) {
		return new SoPhuc(this.thuc * a.thuc - this.ao * a.ao,
						  this.thuc * a.ao + this.ao * a.thuc);
	}
	public String toString() {
		String res = thuc + " ";
		if(ao < 0)
			res += "- " + (ao * -1);
		else 
			res += "+ " + ao;
		return res + "i";
	}
}
