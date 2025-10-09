import java.io.InputStream;
import java.io.OutputStream;
import java.net.Socket;
import java.util.Arrays;

public class TCP_ByteStream_SumInteger2 {
    private static boolean isPrime(int n) {
        if (n < 2) return false;
        for (int i = 2; i <= Math.sqrt(n); i++) {
            if (n % i == 0) return false;
        }
        return true;
    }
    public static void main(String[] args) throws Exception {
        Socket socket = new Socket("203.162.10.109", 2206);
        InputStream in = socket.getInputStream();
        OutputStream out = socket.getOutputStream();

        String code = "B22DCCN468;" + "j7Q4p42N";

        out.write(code.getBytes());
        out.flush();

        byte buffer[] = new byte[1024];
        int len = in.read(buffer);
        String s = new String(buffer, 0, len);
        System.out.println(s);

        String[] arr = s.split("\\,");
        long sum = 0;
        for(String num : arr) {
            int n = Integer.parseInt(num);
            if(isPrime(n)) sum += n;
        }
        System.out.println(sum);
        out.write((sum + "").getBytes());
        out.flush();
    }
}
