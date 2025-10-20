package UDP;

import java.io.Serializable;

public class Employee implements Serializable {
    private static final long serialVersionUID = 20261107L;
    private String id;
    private String name;
    private double salary;
    private String hireDate;

    public Employee(String id, String name, double salary, String hireDate) {
        this.id = id;
        this.name = name;
        this.salary = salary;
        this.hireDate = hireDate;
    }

    public String getId() {
        return id;
    }

    public void setId(String id) {
        this.id = id;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public double getSalary() {
        return salary;
    }

    public void setSalary(double salary) {
        this.salary = salary;
    }

    public String getHireDate() {
        return hireDate;
    }

    public void setHireDate(String hireDate) {
        this.hireDate = hireDate;
    }

    public void convName() {
        String arr[] = this.name.split("\\s+");
        String res = "";
        for(int i = 0; i < arr.length; i++) {
            res  += Character.toUpperCase(arr[i].charAt(0)) + arr[i].substring(1).toLowerCase();
            if(i < arr.length - 1) res += " ";
        }
        this.name = res;
    }

    public void convSalary() {
        String year = this.hireDate.substring(0, 4);
        int x = 0;
        for(int i = 0; i < year.length(); i++) {
            x += (year.charAt(i) - '0');
        }
        this.salary = this.salary + (this.salary * x / 100);
    }

    public void convDate() {
        String arr[] = this.hireDate.split("\\-");
        this.hireDate = arr[2] + "/" + arr[1] + "/" + arr[0];
    }

    @Override
    public String toString() {
        return "Employee [id=" + id + ", name=" + name + ", salary=" + salary + ", hireDate=" + hireDate + "]";
    }
}
