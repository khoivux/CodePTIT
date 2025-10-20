import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.net.Socket;

/*
[Mã câu hỏi (qCode): jUAmZFpA].  Một chương trình server cho phép kết nối qua giao thức TCP tại cổng 2208 (hỗ trợ thời gian giao tiếp tối đa cho mỗi yêu cầu là 5 giây). Yêu cầu là xây dựng một chương trình client tương tác với server sử dụng các luồng ký tự (BufferedReader/BufferedWriter) theo kịch bản sau:
a. Gửi một chuỗi chứa mã sinh viên và mã câu hỏi với định dạng "studentCode;qCode".
Ví dụ: "B15DCCN999;1D08FX21"
b. Nhận từ server một chuỗi chứa nhiều từ, các từ được phân tách bởi khoảng trắng.
Ví dụ: "hello world programming is fun"
c. Thực hiện đảo ngược từ và mã hóa RLE để nén chuỗi ("aabb" nén thành "a2b2"). Gửi chuỗi đã được xử lý lên server. Ví dụ: "ol2eh dlrow gnim2argorp si nuf".
d. Đóng kết nối và kết thúc chương trình
 */

public class TCP_CharacterStream_ReverseAndRLE {
    public static void main(String[] args) throws Exception {
        Socket socket = new Socket("203.162.10.109", 2208);
        BufferedReader reader = new BufferedReader(new InputStreamReader(socket.getInputStream()));
        BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(socket.getOutputStream()));
        //CHARACTER STREAM
        String message = "";
        //WRITE
        writer.write(message);
        writer.newLine();
        writer.flush();

        // Nhận phản hồi từ server
        String response = reader.readLine();

        writer.write(response);
        writer.newLine();
        writer.flush();

        socket.close();
    }
}
