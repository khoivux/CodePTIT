package J05010;

public class Product implements Comparable<Product>{
	private String id, name, type;
	private double buyPrice, sellPrice;
	public Product(String id, String name, String type, double buyPrice, double sellPrice) {
		super();
		this.id = id;
		this.name = name;
		this.type = type;
		this.buyPrice = buyPrice;
		this.sellPrice = sellPrice;
	}
	public double getProfit() {
		return sellPrice - buyPrice;
	}
	@Override
	public int compareTo(Product p) {
		if(this.getProfit() < p.getProfit())
			return 1;
		else return -1;
	}
	public String toString() {
		return id + " " + name + " " + type + String.format(" %.2f", getProfit());
	}
}
