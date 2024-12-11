package GUI.Bai6.J01004;

import java.awt.BorderLayout;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JPanel;
import javax.swing.JTextField;

public class PrimeNumber extends JFrame{
	private JTextField nhapSo;
	private JButton kiemTra;
	private JLabel ketQua;
	
	public PrimeNumber(String title) {
		setTitle(title);
		setSize(300, 200);
		
		setLayout(new GridLayout(3, 1));
		
		JLabel lbl = new JLabel("Nhập số N");
		JPanel p1 = new JPanel();
		nhapSo = new JTextField();
		p1.setLayout(new GridLayout(1, 2));
		p1.add(lbl);
		p1.add(nhapSo);
		
		ketQua = new JLabel("Kết quả: ");
		
		kiemTra = new JButton("Kiểm tra");
		kiemTra.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
            	kiemTraSoNguyenTo();
            }
        });
		
		add(p1);
		add(ketQua);
		add(kiemTra);
	}
	
	public void kiemTraSoNguyenTo() {
		try {
            Long n = Long.parseLong(nhapSo.getText());
            if (n <= 0) {
            	ketQua.setText("# N phải nhập cần là số nguyên dương");
            } else {
                if(isPrime(n)) {
                	ketQua.setText("YES, " + n + " là số nguyên tố");
                }
                else {
                	ketQua.setText("NO, " + n + " không là số nguyên tố");
                }
            }
        } catch (NumberFormatException e) {
        	ketQua.setText("####");
            JOptionPane.showMessageDialog(this, "Vui long nhap so nguyen duong n hop le!", "Loi", JOptionPane.ERROR_MESSAGE);
        }
	}
	
	public static boolean isPrime(Long n) {
		for(int i = 2; i <= Math.sqrt(n); i++) {
			if(n % i == 0) {
				return false;
			}
		}
		return n > 1;
	}
}
