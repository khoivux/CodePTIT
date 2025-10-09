import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.net.Socket;
import java.util.Arrays;
import java.util.Comparator;

/*
[Mã câu hỏi (qCode): gfFGWbZ5].  Một chương trình server hỗ trợ kết nối qua giao thức TCP tại cổng 2206 (hỗ trợ thời gian giao tiếp tối đa cho mỗi yêu cầu là 5s). Yêu cầu xây dựng chương trình client thực hiện kết nối tới server sử dụng luồng byte dữ liệu (InputStream/OutputStream) để trao đổi thông tin theo thứ tự:
a. Gửi mã sinh viên và mã câu hỏi theo định dạng "studentCode;qCode".
Ví dụ: "B16DCCN999;E56FAB67"
b. Nhận dữ liệu từ server là một chuỗi các số nguyên được phân tách bởi ký tự ",".
Ví dụ: " 3,7,2,5,8,1"
c. Tìm vị trí mà độ lệch của tổng bên trái và tổng bên phải là nhỏ nhất -> Gửi lên server vị trí đó, tổng trái, tổng phải và độ lệch. Ví dụ: với dãy " 3,7,2,5,8,1", vị trí 3 có độ lệch nhỏ nhất = 3 → Kết quả gửi server: "3,12,9,3"
d. Đóng kết nối và kết thúc chương trình.
 */

public class TCP_CharacterStream_SortWords {
    public static void main(String[] args) throws Exception {
        Socket socket = new Socket("203.162.10.109", 2208);
        BufferedReader reader = new BufferedReader(new InputStreamReader(socket.getInputStream()));
        BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(socket.getOutputStream()));

        String studentCode = "B22DCCN468";
        String qCode = "J45oh0j4";
        String message = studentCode + ";" + qCode;

        // Gửi thông tin ban đầu lên server
        writer.write(message);
        writer.newLine();
        writer.flush();

        String response = reader.readLine();
        System.out.println(response);

        // Tách các từ và sắp xếp
        String[] words = response.split("\\s+");
        Arrays.sort(words, Comparator.comparingInt(String::length));

        String result = String.join(", ", words);
        System.out.println(result);

        writer.write(result);
        writer.newLine();
        writer.flush();

        socket.close();
    }
}
