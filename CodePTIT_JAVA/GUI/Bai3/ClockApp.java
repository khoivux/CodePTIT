package GUI.Bai3;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.time.LocalTime;
import java.time.format.DateTimeFormatter;

public class ClockApp extends JFrame {
    private JPanel dongHoKim;
    private JLabel dongHoDienTu;

    public ClockApp(String title) {
        setTitle(title);
        setSize(400, 500);
        
        setLayout(new BorderLayout());

        dongHoKim = new dongHoKim();
        add(dongHoKim, BorderLayout.CENTER);

        dongHoDienTu = new JLabel();
        dongHoDienTu.setFont(new Font("Arial", Font.BOLD, 20));
        dongHoDienTu.setHorizontalAlignment(SwingConstants.CENTER);
        add(dongHoDienTu, BorderLayout.SOUTH);

        // Cập nhật đồng hồ
        Timer timer = new Timer(1000, new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                dongHoKim.repaint();
                capNhatDongHoDienTu();
            }
        });
        timer.start();
        
        
    }

    // Hàm cập nhật đồng hồ số
    private void capNhatDongHoDienTu() {
        LocalTime time = LocalTime.now();
        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("HH:mm:ss");
        dongHoDienTu.setText(time.format(formatter));
    }

    // Vẽ đồng hồ kim
    private class dongHoKim extends JPanel {
        @Override
        protected void paintComponent(Graphics g) {
            super.paintComponent(g);
            int width = getWidth();
            int height = getHeight();
            int radius = Math.min(width, height) / 3;
            
            // Vẽ mặt đồng hồ
            g.setColor(Color.BLACK);
            g.drawOval(width / 2 - radius, height / 2 - radius, 2 * radius, 2 * radius);

            // Vẽ số
            g.setFont(new Font("Arial", Font.BOLD, 20));
            g.drawString("12", width / 2 - 10, height / 2 - radius + 30);
            g.drawString("3", width / 2 + radius - 20, height / 2 + 5);
            g.drawString("6", width / 2 - 5, height / 2 + radius - 10);
            g.drawString("9", width / 2 - radius + 10, height / 2 + 5);

            // Vẽ kim đồng hồ
            LocalTime time = LocalTime.now();
            double gocKimGiay = Math.toRadians(time.getSecond() * 6);
            double gocKimPhut = Math.toRadians(time.getMinute() * 6 + time.getSecond() * 0.1);
            double gocKimGio = Math.toRadians(time.getHour() % 12 * 30 + time.getMinute() * 0.5);

            // Vẽ kim gi�?
            veKim(g, width / 2, height / 2, gocKimGio, radius * 0.5, Color.BLUE);
            // Vẽ kim phút
            veKim(g, width / 2, height / 2, gocKimPhut, radius * 0.7, Color.GREEN);
            // Vẽ kim giây
            veKim(g, width / 2, height / 2, gocKimGiay, radius * 0.9, Color.RED);
        }

        // Hàm vẽ kim đồng hồ
        private void veKim(Graphics g, int x, int y, double goc, double doDai, Color mau) {
            int xEnd = x + (int) (Math.sin(goc) * doDai);
            int yEnd = y - (int) (Math.cos(goc) * doDai);
            Graphics2D g2 = (Graphics2D) g.create();
            g2.setColor(mau);
            g2.drawLine(x, y, xEnd, yEnd);
            g2.dispose();
        }
    }
}
