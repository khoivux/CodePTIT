package ThucHanh1.Bai11;

public class Product {
	private String id, name;
	private Long price;
	private int warranty;
	public Product(String id, String name, Long price, int warranty) {
		super();
		this.id = id;
		this.name = name;
		this.price = price;
		this.warranty = warranty;
	}
	public String getId() {
		return id;
	}
	public Long getPrice() {
		return price;
	}
	public int getWarranty() {
		return warranty;
	}
}
