import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.net.Socket;
import java.util.ArrayList;
import java.util.List;

/*
[Mã câu hỏi (qCode): kZ6gOoXR].  Một chương trình server cho phép kết nối qua giao thức TCP tại cổng 2208 (hỗ trợ thời gian giao tiếp tối đa cho mỗi yêu cầu là 5s). Yêu cầu là xây dựng một chương trình client tương tác với server sử dụng các luồng byte (BufferedWriter/BufferedReader) theo kịch bản sau:
a.	Gửi một chuỗi gồm mã sinh viên và mã câu hỏi với định dạng "studentCode;qCode". Ví dụ: "B15DCCN999;EC4F899B"
b.	Nhận một chuỗi ngẫu nhiên là danh sách các một số tên miền từ server
Ví dụ: giHgWHwkLf0Rd0.io, I7jpjuRw13D.io, wXf6GP3KP.vn, MdpIzhxDVtTFTF.edu, TUHuMfn25chmw.vn, HHjE9.com, 4hJld2m2yiweto.vn, y2L4SQwH.vn, s2aUrZGdzS.com, 4hXfJe9giAA.edu
c.	Tìm kiếm các tên miền .edu và gửi lên server
Ví dụ: MdpIzhxDVtTFTF.edu, 4hXfJe9giAA.edu
d.	Đóng kết nối và kết thúc chương trình.
 */

public class TCP_CharacterStream_EduDomains {
    public static void main(String[] args) throws Exception{
        Socket socket = new Socket("203.162.10.109", 2208);
        BufferedReader reader = new BufferedReader(new InputStreamReader(socket.getInputStream()));
        BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(socket.getOutputStream()));

        String studentCode = "B22DCCN468";
        String qCode = "gBh79noa";
        String message = studentCode + ";" + qCode;

        // Gửi thông tin ban đầu lên server
        writer.write(message);
        writer.newLine();
        writer.flush();

        // Nhận danh sách domain từ server
        String response = reader.readLine();
        System.out.println("Phản hồi từ server: " + response);

        // Tách danh sách domain
        String[] domains = response.split(",\\s*");
        List<String> eduDomains = new ArrayList<>();

        for (String domain : domains) {
            if (domain.endsWith(".edu")) {
                eduDomains.add(domain);
            }
        }

        // Gộp danh sách các domain .edu
        String result = String.join(", ", eduDomains);
        System.out.println("Kết quả gửi lại: " + result);

        // Gửi lại danh sách .edu lên server
        writer.write(result);
        writer.newLine();
        writer.flush();

        socket.close();
    }
}
