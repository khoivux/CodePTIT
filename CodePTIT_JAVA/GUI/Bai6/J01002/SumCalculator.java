package GUI.Bai6.J01002;

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
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new BorderLayout());

        txtN = new JTextField(10);
        btnCalculate = new JButton("Tính Tổng");
        lblResult = new JLabel("Tổng S: ");

        JPanel inputPanel = new JPanel();
        inputPanel.add(new JLabel("Nhập số nguyên dương N: "));
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
            if (n <= 0) {
                lblResult.setText("Tổng S: # (N phải là số nguyên dương)");
            } else {
                int sum = (n * (n + 1)) / 2;
                lblResult.setText("Tổng S: " + sum);
            }
        } catch (NumberFormatException e) {
            lblResult.setText("Tổng S: #");
            JOptionPane.showMessageDialog(this, "Vui long nhap so nguyen duong n hop le!", "Loi", JOptionPane.ERROR_MESSAGE);
        }
    }
}
