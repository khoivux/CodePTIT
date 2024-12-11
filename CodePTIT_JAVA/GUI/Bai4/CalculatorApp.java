package GUI.Bai4;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class CalculatorApp extends JFrame {
    private JTextField display;

    public CalculatorApp() {
        setTitle("Máy Tính Bỏ Túi");
        setSize(400, 500);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);
        
        // Thiết lập giao diện chính
        setLayout(new BorderLayout());

        // Màn hình hiển thị kết quả
        display = new JTextField();
        display.setFont(new Font("Arial", Font.BOLD, 24));
        display.setHorizontalAlignment(SwingConstants.RIGHT);
        display.setEditable(false);
        add(display, BorderLayout.NORTH);

        // Panel chứa các nút
        JPanel panel = new JPanel();
        panel.setLayout(new GridLayout(5, 4, 10, 10));

        // Các nút cho máy tính
        String[] buttons = {
            "7", "8", "9", "/",
            "4", "5", "6", "*",
            "1", "2", "3", "-",
            "0", ".", "=", "+",
            "C", "√", "^", "1/x"
        };

        for (String text : buttons) {
            JButton button = new JButton(text);
            button.setFont(new Font("Arial", Font.BOLD, 18));
            button.addActionListener(new ButtonClickListener());
            panel.add(button);
        }

        add(panel, BorderLayout.CENTER);
    }

    // Lớp xử lý sự kiện nút bấm
    private class ButtonClickListener implements ActionListener {
        private String operator = "";
        private double result = 0;
        private boolean startNewNumber = true;

        @Override
        public void actionPerformed(ActionEvent e) {
            String command = e.getActionCommand();

            try {
                switch (command) {
                    case "C":
                        display.setText("");
                        result = 0;
                        operator = "";
                        startNewNumber = true;
                        break;
                    case "=":
                        calculate(Double.parseDouble(display.getText()));
                        display.setText("" + result);
                        operator = "";
                        startNewNumber = true;
                        break;
                    case "+":
                    case "-":
                    case "*":
                    case "/":
                    case "^":
                        calculate(Double.parseDouble(display.getText()));
                        operator = command;
                        startNewNumber = true;
                        break;
                    case "√":
                        result = Math.sqrt(Double.parseDouble(display.getText()));
                        display.setText("" + result);
                        startNewNumber = true;
                        break;
                    case "1/x":
                        result = 1 / Double.parseDouble(display.getText());
                        display.setText("" + result);
                        startNewNumber = true;
                        break;
                    default:
                        if (startNewNumber) {
                            display.setText(command);
                            startNewNumber = false;
                        } else {
                            display.setText(display.getText() + command);
                        }
                        break;
                }
            } catch (Exception ex) {
                display.setText("Error");
                startNewNumber = true;
            }
        }

        // Hàm tính toán
        private void calculate(double number) {
            switch (operator) {
                case "+": result += number; break;
                case "-": result -= number; break;
                case "*": result *= number; break;
                case "/": result /= number; break;
                case "^": result = Math.pow(result, number); break;
                default: result = number; break;
            }
        }
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            new CalculatorApp().setVisible(true);
        });
    }
}
