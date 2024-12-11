package J05081;

public class Product implements Comparable<Product>{
	private String id, name, unit;
	private Integer buyPrice, sellPrice;
	public Product(String id, String name, String unit, Integer buyPrice, Integer sellPrice) {
		super();
		this.id = id;
		this.name = name;
		this.unit = unit;
		this.buyPrice = buyPrice;
		this.sellPrice = sellPrice;
	}
	public Integer getProfit() {
		return this.sellPrice - this.buyPrice;
	}
	public String toString() {
		return id + " " + name + " " + unit + " " + buyPrice + " " + sellPrice + " " + this.getProfit();
	}
	@Override
	public int compareTo(Product o) {
		if(this.getProfit() == o.getProfit()) {
			return this.id.compareTo(o.id);
		}
		else {
			return o.getProfit() - this.getProfit();
		}
	}
}
