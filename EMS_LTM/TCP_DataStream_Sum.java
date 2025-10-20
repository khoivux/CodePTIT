import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.net.Socket;

public class TCP_DataStream_Sum {
    public static void main(String[] args) throws Exception{
        Socket socket = new Socket("203.162.10.109", 2206);
        DataInputStream in = new DataInputStream(socket.getInputStream());
        DataOutputStream out = new DataOutputStream(socket.getOutputStream());
        // DATA STREAM
        String code = "B22DCCN468;3RViHKNB";
        out.writeUTF(code);
        out.flush();

        int a = in.readInt();
        int b = in.readInt();

        int sum = a + b;
        int mul = a * b;
        out.writeInt(sum);
        out.writeInt(mul);
        socket.close();
    }
}
