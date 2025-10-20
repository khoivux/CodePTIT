package TCP;

import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.net.Socket;

public class TCP_ObjectStream {
    public static String reverseName(String name) {
        String arr[] = name.split("\\s+");
        String res = "";
        for(int i = arr.length - 1; i >= 0; i--) {
            res += arr[i];
            if(i != 0) res += " ";
        }
        return res;
    }

    public static int reverseQuantity(int quantity) {
        int reversed = 0;
        while (quantity != 0) {
            int digit = quantity % 10;
            reversed = reversed * 10 + digit;
            quantity /= 10;
        }
        return reversed;
    }

    public static void main(String[] args) throws Exception, IOException, ClassNotFoundException {
        Socket socket = new Socket("203.162.10.109", 2209);
        ObjectInputStream in = new ObjectInputStream(socket.getInputStream());
        ObjectOutputStream out = new ObjectOutputStream(socket.getOutputStream());

        String code = "B22DCCN468;" + "ULi362ny";
        out.writeObject(code);
        out.flush();

        Laptop laptop = (Laptop) in.readObject();
        System.out.println(laptop);
        laptop.setName(reverseName(laptop.getName()));
        laptop.setQuantity(reverseQuantity(laptop.getQuantity()));
        System.out.println(laptop);

        out.writeObject(laptop);
        out.flush();
        out.close();
        in.close();
        socket.close();
    }
}
