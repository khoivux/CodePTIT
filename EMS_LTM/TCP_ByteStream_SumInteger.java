import java.util.*;
import java.io.*;
import java.net.*;

public class TCP_ByteStream_SumInteger{
    public static void main(String[] args) throws Exception{
        Socket socket = new Socket("203.162.10.109", 2206);
        InputStream in = socket.getInputStream();
        OutputStream out = socket.getOutputStream();

        String code = "B22DCCN468;wullNoMT";
        out.write(code.getBytes());
        out.flush();

        byte buffer[] = new byte[1024];
        int len = in.read(buffer);

        String s = new String(buffer, 0, len);
        System.out.println(s);

        String[] arr = s.split("\\|");
        long sum =  Arrays.stream(arr)
                .mapToInt(Integer::parseInt)
                .sum();
        System.out.println(sum);
        out.write((sum + "").getBytes());
    }
}
