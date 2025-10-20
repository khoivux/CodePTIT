package UDP;

import java.net.DatagramPacket;
import java.net.DatagramSocket;
import java.net.InetAddress;

public class UDP_String {
    public static void main(String[] args) throws Exception {
        DatagramSocket socket = new DatagramSocket();
        InetAddress sA = InetAddress.getByName("203.162.10.109");
        int port = 2208;
        //UDP DATATYPE
        String code = ";B22DCCN468;" + "SuhLHmfU";
        DatagramPacket gui1 = new DatagramPacket(code.getBytes(), code.length(), sA, port);
        socket.send(gui1);

        byte[] nhan = new byte[1024];
        DatagramPacket nhan1 = new DatagramPacket(nhan, nhan.length);
        socket.receive(nhan1);

        String res = "";
        DatagramPacket gui2 = new DatagramPacket(res.getBytes(), res.length(), sA, port);
        socket.send(gui2);
        socket.close();
    }
}
