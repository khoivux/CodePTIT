import java.io.InputStream;
import java.io.OutputStream;
import java.net.Socket;
import java.util.Arrays;

public class TCP_ByteStream_SumLeftSumRight {
    public static void main(String[] args) throws Exception{
        Socket socket = new Socket("203.162.10.109", 2206);
        InputStream in = socket.getInputStream();
        OutputStream out = socket.getOutputStream();

        String code = "B22DCCN468;" + "gfFGWbZ5";
        out.write(code.getBytes());
        out.flush();

        byte buffer[] = new byte[1024];
        int len = in.read(buffer);
        String s = new String(buffer, 0, len);
        System.out.println(s);
        int arr[] = Arrays.stream(s.split("\\,"))
                .mapToInt(Integer::parseInt).toArray();
        int dpLeft[] = new int[arr.length];
        int dpRight[] = new int[arr.length];
        dpLeft[0] = arr[0];
        dpRight[arr.length - 1] = arr[arr.length - 1];
        for(int i = 1; i < arr.length; i++) {
            dpLeft[i] = dpLeft[i - 1] + arr[i];
        }
        for(int i = arr.length - 2; i >= 0; i--) {
            dpRight[i] = dpRight[i + 1] + arr[i];
        }
        int tmp = Integer.MAX_VALUE;
        String res = "";
        for(int i = 1; i < arr.length - 1; i++) {
            int t = Math.abs(dpLeft[i - 1] - dpRight[i + 1]);
            if(t <= tmp) {
                tmp = t;
                res = i + "," + dpLeft[i - 1] + "," + dpRight[i + 1] + "," + t;
            }
        }
        System.out.println(res);
        out.write(res.getBytes());
        out.flush();
    }
}
