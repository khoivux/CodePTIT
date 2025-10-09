import java.io.InputStream;
import java.io.OutputStream;
import java.net.Socket;
import java.util.ArrayList;
import java.util.List;
/*
[Mã câu hỏi (qCode): coxaGXEz].  Một chương trình server hỗ trợ kết nối qua giao thức TCP tại cổng 2206 (hỗ trợ thời gian giao tiếp tối đa cho mỗi yêu cầu là 5s). Yêu cầu xây dựng chương trình client thực hiện kết nối tới server sử dụng luồng byte dữ liệu (InputStream/OutputStream) để trao đổi thông tin theo thứ tự:
a. Gửi mã sinh viên và mã câu hỏi theo định dạng "studentCode;qCode".
Ví dụ: "B16DCCN999;D45EFA12"
b. Nhận dữ liệu từ server là một chuỗi các số nguyên được phân tách bởi ký tự ",".
Ví dụ: "10,5,15,20,25,30,35"
c. Xác định hai số trong dãy có tổng gần nhất với gấp đôi giá trị trung bình của toàn bộ dãy. Gửi thông điệp lên server theo định dạng "num1,num2" (với num1 < num2)
Ví dụ: Với dãy "10,5,15,20,25,30,35", gấp đôi giá trị trung bình là 40, hai số có tổng gần nhất là 15 và 25. Gửi lên server chuỗi "15,25".
d. Đóng kết nối và kết thúc chương trình.
 */

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
