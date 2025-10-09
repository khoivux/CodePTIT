import java.io.InputStream;
import java.io.OutputStream;
import java.net.Socket;
import java.util.Arrays;

public class TCP_ByteStream_Position {
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
        String[] arrS = s.split("\\,");

        int arr[] = Arrays.stream(arrS).
                mapToInt(Integer::parseInt).toArray();


    }
}
