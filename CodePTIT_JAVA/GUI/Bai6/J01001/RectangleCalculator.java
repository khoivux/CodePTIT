package GUI.Bai6.J01001;
import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class RectangleCalculator extends JFrame {
    private JTextField chieuDai, chieuRong;
    private JButton tinhToan;
    private JLabel lblChuVi, lblDienTich;

    public RectangleCalculator(String title) {
        setTitle(title);
        setSize(500, 300);
        
        setLayout(new GridLayout(5, 2));
        
        chieuDai = new JTextField(10);
        chieuRong = new JTextField(10);
        tinhToan = new JButton("Tinh chu vi va dien tich");
        lblChuVi = new JLabel("Chu vi: ");
        lblDienTich = new JLabel("Dien tich: ");
 
        add(new JLabel("Chieu dai: "));
        add(chieuDai);
        add(new JLabel("Chieu rong: "));
        add(chieuRong);
        add(tinhToan);
        add(new JLabel(""));
        add(lblChuVi);
        add(lblDienTich);

        tinhToan.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                calculate();
            }
        });
    }

    private void calculate() {
        try {
            int dai = Integer.parseInt(chieuDai.getText());
            int rong = Integer.parseInt(chieuRong.getText());

            if (dai <= 0 || rong <= 0) {
                lblChuVi.setText("Chu vi: #");
                lblDienTich.setText("Dien tich: #");
                JOptionPane.showMessageDialog(this, "Vui long nhap chieu dai va chieu rong hop le!", "Loi", JOptionPane.ERROR_MESSAGE);
            } else {
                int perimeter = 2 * (dai + rong);
                int area = dai * rong;
                lblChuVi.setText("Chu vi: " + perimeter);
                lblDienTich.setText("Dientich: " + area);
            }
        } catch (NumberFormatException e) {
            lblChuVi.setText("Chu vi: #");
            lblDienTich.setText("Dien tich: #");
            JOptionPane.showMessageDialog(this, "Vui long nhap chieu dai va chieu rong hop le!", "Loi", JOptionPane.ERROR_MESSAGE);
        }
    }
}
