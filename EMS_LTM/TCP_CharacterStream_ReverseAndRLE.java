import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.net.Socket;

public class TCP_CharacterStream_ReverseAndRLE {
    private static final int port = 2208;
    private static final String host = "203.162.10.109";

    public static void main(String[] args) {
        String studentCode = "B22DCCN468";
        String qCode = "xm2fOkl3";
        String initialMessage = studentCode + ";" + qCode;

        try(Socket socket = new Socket(host, port)) {
            BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(socket.getOutputStream()));
            BufferedReader reader = new BufferedReader(new InputStreamReader(socket.getInputStream()));

            writer.write(initialMessage);
            writer.newLine();
            writer.flush();

            String response = reader.readLine();
            if(response == null) {
                System.out.println("khong nhan duoc res");
                return;
            }
            System.out.println(response);

            StringBuilder reversedWords = new StringBuilder();
            String[] list = response.split("\\s+");

            for (int i = 0; i < list.length; i++) {
                reversedWords.append(new StringBuilder(list[i]).reverse());
                if (i < list.length - 1) reversedWords.append(" ");
            }

            String str = reversedWords.toString();
            StringBuilder res = new StringBuilder();
            res.append(str.charAt(0));
            int cnt = 1;

            for (int i = 1; i < str.length(); i++) {
                char cur = str.charAt(i);
                char prev = str.charAt(i - 1);

                if (!Character.isAlphabetic(cur)) {
                    cnt = 1;
                    res.append(cur);
                    continue;
                }

                if (cur == prev) {
                    cnt++;
                } else {
                    if (cnt > 1) res.append(cnt);
                    res.append(cur);
                    cnt = 1;
                }
            }
            if (cnt > 1) res.append(cnt);

            System.out.println(res);
            writer.write(res.toString());
            writer.newLine();
            writer.flush();

        } catch (Exception e) {
            System.out.println("Loi tao socket " + e.getMessage());
        }
    }

}
