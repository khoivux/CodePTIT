package UDP;

import java.net.DatagramPacket;
import java.net.DatagramSocket;
import java.net.InetAddress;
import java.net.Socket;

public class UDP_DataType {
    public static int findMax(int a[], int l, int r) {
        int max = a[l];
        for (int i = l + 1; i <= r; i++) {
            if (a[i] > max) {
                max = a[i];
            }
        }
        return max;
    }
    public static void main(String[] args) throws Exception{
        DatagramSocket socket = new DatagramSocket();
        InetAddress sA = InetAddress.getByName("203.162.10.109");
        int sP = 2207;

        String code = ";B22DCCN468;" + "S4HFy6To";
        DatagramPacket dpGui = new DatagramPacket(code.getBytes(), code.length(), sA, sP);
       socket.send(dpGui);

        byte[] nhan = new byte[1024];
        DatagramPacket dpNhan = new DatagramPacket(nhan, nhan.length);
        socket.receive(dpNhan);
        String response = new String(dpNhan.getData()).trim();
        System.out.println(response);

        String[] parts = response.split(";");
        String requestId = parts[0];
        int n = Integer.parseInt(parts[1]);
        int k = Integer.parseInt(parts[2]);
        String[] nums = parts[3].split(",");

        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = Integer.parseInt(nums[i]);
        }
        String result = requestId + ";";
        int l = 0; int r = k - 1;
        while(r < n) {
            int max = findMax(arr, l, r);
            result += max;
            if(r < n - 1) result += ",";
            l++; r++;
        }
        System.out.println(result);
        DatagramPacket dpGui2 = new DatagramPacket(result.getBytes(), result.length(), sA, sP);
        socket.send(dpGui2);
        socket.close();
    }
}
