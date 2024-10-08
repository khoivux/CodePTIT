import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import java.util.TreeSet;

public class testqq {
	
	public static boolean check(String s) {
		for(int i = 0; i < s.length() - 1; i++) {
			if(s.charAt(i) > s.charAt(i + 1))
				return false;
		}
		return true;
	}
	private static ArrayList<Integer> readDataFromFile(String fileName) throws FileNotFoundException, IOException, ClassNotFoundException {
	        ObjectInputStream in = new ObjectInputStream(new FileInputStream(fileName));
	        ArrayList<Integer> list = (ArrayList<Integer>) in.readObject();
	        return list;
	}
	public static void main(String[] args) throws FileNotFoundException, ClassNotFoundException, IOException{
		 ArrayList<Integer> list1 = readDataFromFile("DATA1.in");
		 ArrayList<Integer> list2 = readDataFromFile("DATA2.in");
         
         Map<Integer, Integer> map1 = new HashMap<>();
         Map<Integer, Integer> map2 = new HashMap<>();
         TreeSet<Integer> set = new TreeSet<>();
         for(Integer num : list1) {
        	 set.add(num);
        	 if(!map1.containsKey(num))
        		 map1.put(num, 1);
        	 else 
        		 map1.put(num, map1.get(num) + 1);
         }
         for(Integer num : list2) {
        	 set.add(num);
        	 if(!map2.containsKey(num))
        		 map2.put(num, 1);
        	 else 
        		 map2.put(num, map2.get(num) + 1);
         }
         for(Integer num : set) {
        	 if(num >= 10)
        		 System.out.println(num + " " + map1.get(num) + " " + map2.get(num));
         }
	}
}
