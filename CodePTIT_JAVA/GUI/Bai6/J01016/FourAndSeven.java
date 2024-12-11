package GUI.Bai6.J01016;

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

public class FourAndSeven extends JFrame{
	private JTextField nhapSo;
	private JButton kiemTra;
	private JLabel ketQua;
	
	public FourAndSeven(String title) {
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
            	kiemTraSo();
            }
        });
		
		add(p1);
		add(ketQua);
		add(kiemTra);
	}
	
	public void kiemTraSo() {
		try {
            Long n = Long.parseLong(nhapSo.getText());
            if (n <= 0) {
            	ketQua.setText("# N phải nhập cần là số nguyên dương");
            } else {
            	int cnt4 = 0, cnt7 = 0;
        		while(n != 0) {
        			int x = (int) (n % 10);
        			if(x == 4) 
        				cnt4++;
        			else if(x == 7)
        				cnt7++;
        			n /= 10;
        		}
        		if(cnt4 + cnt7 == 4 || cnt4 + cnt7 == 7) {
        			ketQua.setText("Kết quả: YES");
        		} else {
        			ketQua.setText("Kết quả: NO");
        		}
            }
        } catch (NumberFormatException e) {
        	ketQua.setText("####");
            JOptionPane.showMessageDialog(this, "Vui long nhap so nguyen duong n hop le!", "Loi", JOptionPane.ERROR_MESSAGE);
        }
	}
	

}
