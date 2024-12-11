package J07058;

public class Subject implements Comparable<Subject> {

    private String maMon, tenMon, hinhThucThi;

    public Subject(String maMon, String tenMOn, String hinhThucThi) {
        this.maMon = maMon;
        this.tenMon = tenMOn;
        this.hinhThucThi = hinhThucThi;
    }

    public String getMaMon() {
        return maMon;
    }

    @Override
    public String toString() {
        return maMon + " " + tenMon + " " + hinhThucThi;
    }

    @Override
    public int compareTo(Subject other) {
        return this.maMon.compareTo(other.getMaMon());
    }
}
