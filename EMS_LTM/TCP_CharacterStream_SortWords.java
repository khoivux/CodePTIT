import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.net.Socket;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Comparator;
import java.util.List;
import java.util.logging.Level;
import java.util.logging.Logger;

public class TCP_CharacterStream_SortWords {
    private static final Logger LOGGER = Logger.getLogger(TCP_CharacterStream_EduDomains.class.getName());
    private static final int port = 2208;
    private static final String host = "203.162.10.109";

    public static void main(String[] args) {
        String studentCode = "B22DCCN468";
        String qCode = "J45oh0j4";
        String initialMessage = studentCode + ";" + qCode;

        try(Socket socket = new Socket(host, port)) {
            socket.setSoTimeout(5000);
            BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(socket.getOutputStream()));
            BufferedReader reader = new BufferedReader(new InputStreamReader(socket.getInputStream()));

            writer.write(initialMessage);
            writer.newLine();
            writer.flush();

            String response = reader.readLine();
            LOGGER.info("Phản hồi từ server: " + response);

            if (response == null) {
                LOGGER.warning("Không nhận được phản hồi từ server.");
                return;
            }

            String words[] = response.split("\\s+");
            Arrays.sort(words, Comparator.comparingInt(String::length));

            String result = String.join(", ", words);
            writer.write(result);
            writer.newLine();
            writer.flush();

            LOGGER.info("Gửi thành công: " + result);

        } catch (Exception e) {
            LOGGER.log(Level.SEVERE, "Lỗi kết nối hoặc giao tiếp: " + e.getMessage(), e);
        }
    }
}
