package J07051;

import java.util.Date;

public class Customer implements Comparable<Customer> {

    public static int NUM_ID = 1;
    private String id, name, roomId;
    private int timeByDay, price, totalCost;

    public Customer(String name, String roomId, Date checkInDate, Date checkOutDate, int serviceFee) {
        this.id = String.format("KH%02d", NUM_ID++);
        this.name = normalizeName(name);
        this.roomId = roomId;
        switch (roomId.substring(0, 1)) {
            case "1":
                price = 25;
                break;
            case "2":
                price = 34;
                break;
            case "3":
                price = 50;
                break;
            case "4":
                price = 80;
                break;
        }
        this.timeByDay = calculateTime(checkInDate, checkOutDate);
        this.totalCost = price * timeByDay + serviceFee;
    }

    private String normalizeName(String s) {
        String[] words = s.split("\\s+");
        String res = "";
        for (int i = 0; i < words.length; i++) {
            res += words[i].substring(0, 1).toUpperCase() + words[i].substring(1).toLowerCase();
            if (i != words.length - 1) {
                res += " ";
            }
        }
        return res;
    }

    private int calculateTime(Date checkIn, Date checkOut) {
        long in = checkIn.getTime();
        long out = checkOut.getTime();
        return (int) ((out - in) / (1000 * 60 * 60 * 24)) + 1;
    }

    public Integer getTotalCost() {
        return totalCost;
    }

    @Override
    public String toString() {
        return id + " " + name + " " + roomId + " " + timeByDay + " " + totalCost;
    }

    @Override
    public int compareTo(Customer other) {
        return -(this.getTotalCost().compareTo(other.getTotalCost()));
    }
}