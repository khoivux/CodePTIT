package UDP;

import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.net.DatagramPacket;
import java.net.DatagramSocket;
import java.net.InetAddress;

public class UDP_Object {
    public static void main(String[] args) throws Exception{
        DatagramSocket socket = new DatagramSocket();
        InetAddress sA = InetAddress.getByName("203.162.10.109");;
        int port = 2209;

        String code = ";B22DCCN468;" + "ciCSmdxi";
        DatagramPacket gui1 = new DatagramPacket(code.getBytes(), code.length(), sA, port);
        socket.send(gui1);

        byte buff[] = new byte[1024];
        DatagramPacket nhan1 = new DatagramPacket(buff, buff.length);
        socket.receive(nhan1);

        String rq = new String (nhan1.getData(), 0, 8).trim();
        ByteArrayInputStream input =  new ByteArrayInputStream(nhan1.getData(), 8, nhan1.getLength() - 8);
        ObjectInputStream in = new ObjectInputStream(input);
        Employee emp = (Employee) in.readObject();


        ByteArrayOutputStream output = new ByteArrayOutputStream();
        ObjectOutputStream out = new ObjectOutputStream(output);
        out.writeObject(emp);
        out.flush();

        byte sendData[] = new byte[8 + output.size()];
        System.arraycopy(rq.getBytes(), 0, sendData, 0, 8);
        System.arraycopy(output.toByteArray(), 0, sendData, 8, output.size());
        DatagramPacket guiLai = new DatagramPacket(sendData, sendData.length, sA, port);
        socket.send(guiLai);
        socket.close();
    }
}
