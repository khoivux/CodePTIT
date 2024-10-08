import java.io.File;
import java.io.IOException;
import java.util.Scanner;

import javafx.util.Pair;

public class J07017 {
	public static class Pair<T1, T2> {
	    T1 first;
	    T2 second;

	    Pair(T1 first, T2 second) {
	        this.first = first;
	        this.second = second;
	    }

	    boolean nto(int n) {
	        if (n < 2)
	            return false;
	        for (int i = 2; i * i <= n; i++)
	            if (n % i == 0)
	                return false;
	        return true;
	    }

	    boolean isPrime() {
	        if (nto((Integer) first) && nto((Integer) second))
	            return true;
	        return false;
	    }

	    @Override
	    public String toString() {
	        return first + " " + second;
	    }
	}
	public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(new File("DATA.in"));
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            boolean check = false;
            for(int i = 2; i <= 2*Math.sqrt(n); i++){
                Pair<Integer, Integer> p = new Pair<>(i, n-i);
                if(p.isPrime()){
                    System.out.println(p);
                    check = true;
                    break; 
                }
            }
            if(!check) System.out.println(-1);
        }
    }
}
