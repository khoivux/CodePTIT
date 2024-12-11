package ThucHanh1.Bai11;

import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Date;

public class Customer implements Comparable<Customer>{
	private static Integer cnt = 0;
	private String id, name, address, productId;
	private Long quantity, cost;
	private Date buyDate, warrantyDate;
	public Customer(String name, String address, String productId, Long quantity, Date buyDate) {
		super();
		cnt++;
		this.id = String.format("KH%02d", cnt);
		this.name = name;
		this.address = address;
		this.productId = productId;
		this.quantity = quantity;
		this.buyDate = buyDate;
	}
	public void setCost(Long price) {
		this.cost = price * quantity;
	}
	public void setWarrantyDate(int months) {
		Calendar calendar = Calendar.getInstance();
		calendar.setTime(buyDate);
		calendar.add(Calendar.MONTH, months);
		this.warrantyDate = calendar.getTime();
	}
	public String getProductId() {
		return productId;
	}
	public String toString() {
		SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
		return id + " " + name + " " + address + " " + productId + " " + cost + " " + sdf.format(warrantyDate);
	}
	@Override
	public int compareTo(Customer o) {
		if(warrantyDate.compareTo(o.warrantyDate) == 0) 
			return id.compareTo(o.id);
		else 
			return warrantyDate.compareTo(o.warrantyDate);
	}
	
}
