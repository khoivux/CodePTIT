import java.io.InputStream;
import java.io.OutputStream;
import java.net.Socket;
import java.util.ArrayList;
import java.util.List;

public class TCP_ByteStream_Num1Num2 {
    public static void main(String[] args) throws Exception{
        Socket socket = new Socket("203.162.10.109", 2206);
        InputStream in = socket.getInputStream();
        OutputStream out = socket.getOutputStream();

        String code = "B22DCCN468;" + "coxaGXEz";

        out.write(code.getBytes());
        out.flush();

        byte buffer[] = new byte[1024];
        int len = in.read(buffer);
        String s = new String(buffer, 0, len);
        String[] arrS = s.split("\\,");
        List<Integer> arr = new ArrayList<>();
        for(String num : arrS) {
            arr.add(Integer.parseInt(num));
        }
        arr.sort(Integer::compareTo);

        double mean = arr.stream().mapToInt(Integer::intValue).average().orElse(0.0) * 2;
        System.out.println(mean);
        double tmp = Double.MAX_VALUE;
        String res = "";
        for(int i = 0; i < arr.size() - 1; i++) {
            for(int j = i + 1; j < arr.size(); j++) {
                double t = Math.abs(arr.get(i) + arr.get(j) - mean) ;
                if(t <= tmp) {
                    tmp = t;
                    res = arr.get(i) + "," + arr.get(j);
                }
            }
        }
        System.out.println(res);
        out.write(res.getBytes());
        out.flush();
    }
}
