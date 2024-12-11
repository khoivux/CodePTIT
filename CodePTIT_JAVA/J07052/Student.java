package J07052;

import java.text.DecimalFormat;

public class Student implements Comparable<Student> {

    private String id;
    private String name;
    private double math;
    private double physic;
    private double chemistry;
    private String status;

    public Student(String id, String name, double math, double physic, double chemistry) {
        this.id = id;
        this.name = name;
        this.math = math;
        this.physic = physic;
        this.chemistry = chemistry;
    }

    public String getId() {
        return id;
    }

    public void setId(String id) {
        this.id = id;
    }

    public String getName() {
        name = name.trim().replaceAll("\\s+", " ");
        String[] tmp = name.split(" ");
        name = "";
        for (int i = 0; i < tmp.length; i++) {
            name += Character.toUpperCase(tmp[i].charAt(0)) + tmp[i].substring(1).toLowerCase() + " ";
        }
        name = name.trim();
        return name;
    }

    public double getSumMark() {
        return math * 2 + physic + chemistry + getBonus();
    }

    public double getBonus() {
        String s = id.substring(0, 3);
        if (s.equals("KV1")) {
            return 0.5;
        }
        if (s.equals("KV2")) {
            return 1.0;
        }
        if (s.equals("KV3")) {
            return 2.5;
        }
        return 0;
    }

    public String getStatus() {
        return status;
    }

    public void setStatus(String status) {
        this.status = status;
    }

    public static String removeZero(double number) {
        DecimalFormat format = new DecimalFormat("#.#");
        return format.format(number);
    }

    @Override
    public String toString() {
        return id + " " + getName() + " " + removeZero(getBonus()) + " " + removeZero(getSumMark()) + " " + getStatus();
    }

    @Override
    public int compareTo(Student o) {
        if (this.getSumMark() == o.getSumMark()) {
            return this.getId().compareTo(o.getId());
        }
        return this.getSumMark() < o.getSumMark() ? 1 : -1;
    }
}