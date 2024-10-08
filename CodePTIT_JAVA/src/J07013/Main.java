package J07013;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.io.Serializable;
import java.util.ArrayList;
import java.util.Date;

public  class Main {
	public static class Student implements Serializable {
    private String ma;
    private String ten;
    private String lop;
    private Date ngaysinh;
    private float gpa;
    private static int cnt = 0;

    private static final SimpleDateFormat inputDateFormat = new SimpleDateFormat("dd/MM/yyyy");
    private static final SimpleDateFormat outputDateFormat = new SimpleDateFormat("dd/MM/yyyy");

    public SinhVien(String ten, String lop, String ngaysinh, float gpa) throws ParseException {
        cnt++;
        this.ma = String.format("B20DCCN%03d", cnt); 
        this.ten = ten;
        this.lop = lop;
        this.ngaysinh = inputDateFormat.parse(ngaysinh); 
        this.gpa = gpa;
    }

    public String getFormattedNgaySinh() {
        return outputDateFormat.format(this.ngaysinh); 
    }

    @Override
    public String toString() {
        return ma + " " + ten + " " + lop + " " + getFormattedNgaySinh() + String.format(" %.2f", gpa);
    }
}
	public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
		ObjectInputStream in = new ObjectInputStream(new FileInputStream("SV.in"));
		ArrayList<Student> list = (ArrayList<Student>) in.readObject();
		for(Student s : list) {
			System.out.println(s);
		}
	}
}