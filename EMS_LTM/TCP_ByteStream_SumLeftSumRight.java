import java.io.InputStream;
import java.io.OutputStream;
import java.net.Socket;
import java.util.Arrays;

/*
[Mã câu hỏi (qCode): gfFGWbZ5].  Một chương trình server hỗ trợ kết nối qua giao thức TCP tại cổng 2206 (hỗ trợ thời gian giao tiếp tối đa cho mỗi yêu cầu là 5s). Yêu cầu xây dựng chương trình client thực hiện kết nối tới server sử dụng luồng byte dữ liệu (InputStream/OutputStream) để trao đổi thông tin theo thứ tự:
a. Gửi mã sinh viên và mã câu hỏi theo định dạng "studentCode;qCode".
Ví dụ: "B16DCCN999;E56FAB67"
b. Nhận dữ liệu từ server là một chuỗi các số nguyên được phân tách bởi ký tự ",".
Ví dụ: " 3,7,2,5,8,1"
c. Tìm vị trí mà độ lệch của tổng bên trái và tổng bên phải là nhỏ nhất -> Gửi lên server vị trí đó, tổng trái, tổng phải và độ lệch. Ví dụ: với dãy " 3,7,2,5,8,1", vị trí 3 có độ lệch nhỏ nhất = 3 → Kết quả gửi server: "3,12,9,3"
d. Đóng kết nối và kết thúc chương trình.
 */

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
