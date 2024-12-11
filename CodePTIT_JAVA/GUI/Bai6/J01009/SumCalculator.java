package GUI.Bai6.J01009;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class SumCalculator extends JFrame {
    private JTextField txtN;
    private JButton btnCalculate;
    private JLabel lblResult;

    public SumCalculator(String title) {
        setTitle(title);
        setSize(500, 200);
        setLayout(new BorderLayout());

        txtN = new JTextField(10);
        btnCalculate = new JButton("Tính Tổng giai thừa");
        lblResult = new JLabel("Tổng S = 1 + 1.2 + 1.2.3 +...+ 1.2.3...n là: ");

        JPanel inputPanel = new JPanel();
        inputPanel.add(new JLabel("Nhập số dương N: "));
        inputPanel.add(txtN);

        add(inputPanel, BorderLayout.NORTH);
        add(btnCalculate, BorderLayout.SOUTH);
        add(lblResult, BorderLayout.CENTER);

        btnCalculate.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                calculateSum();
            }
        });
    }

    private void calculateSum() {
        try {

            int n = Integer.parseInt(txtN.getText());
            if (n < 0) {
                lblResult.setText("Tổng S: # (N phải là số dương)");
            } else {
                Long sum = (long) 1;
                Long tmp = (long) 1;
                for(int i = 2; i <= n; i++) {
                	tmp *= i;
                	sum += tmp;
                }
                lblResult.setText("Tổng S = 1 + 1.2 + 1.2.3 +...+ 1.2.3...n là: " + sum);
            }
        } catch (NumberFormatException e) {
            lblResult.setText("Tổng S: #");
            JOptionPane.showMessageDialog(this, "Vui lòng nhập số dương n hợp lệ!", "Lỗi", JOptionPane.ERROR_MESSAGE);
        }
    }
}
