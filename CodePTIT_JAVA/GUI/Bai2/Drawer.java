package GUI.Bai2;

import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.Graphics;

import javax.swing.JButton;
import javax.swing.JCheckBox;
import javax.swing.JColorChooser;
import javax.swing.JComboBox;
import javax.swing.JFrame;
import javax.swing.JPanel;



public class Drawer extends JFrame{
	private JPanel manHinhVe, thaoTac;
	private JComboBox<String> loaiHinh;
	private JCheckBox kieuHinh;
	private JButton chonMau, veHinh;
	private Color mauVe = Color.BLACK;
	
	public Drawer(String title) {
		setTitle(title);
		setSize(800, 600);
		
		loaiHinh = new JComboBox<>(new String[] {"Hình vuông", "Hình chữ nhật", "Hình tròn", "Hình đa giác"});
		chonMau = new JButton("Chọn màu");
		veHinh = new JButton("Vẽ hình");
		kieuHinh = new JCheckBox("Kiểu đặc");
		
		chonMau.addActionListener(e -> {
            mauVe = JColorChooser.showDialog(null, "Chọn Màu", mauVe);
        });	
		
		veHinh.addActionListener(e-> {
			manHinhVe.repaint();
		});
		
		manHinhVe = new JPanel() {
			@Override
			protected void paintComponent(Graphics g) {
				super.paintComponent(g);
                g.setColor(mauVe);
                
                String loaiHinhVe = (String) loaiHinh.getSelectedItem();
                boolean hinhDac = kieuHinh.isSelected();
                
                switch (loaiHinhVe) {
	                case "Hình vuông":
	                    veHinhVuong(g, hinhDac);
	                    break;
	                case "Hình chữ nhật":
	                    veHinhChuNhat(g, hinhDac);
	                    break;
	                case "Hình tròn":
	                    veHinhTron(g, hinhDac);
	                    break;
	                case "Hình đa giác":
	                    veHinhDaGiac(g, hinhDac);
	                    break;
                }
			}
		};
		
		
		this.setLayout(new BorderLayout());
		thaoTac = new JPanel();
		thaoTac.add(loaiHinh);		
		thaoTac.add(kieuHinh);
		thaoTac.add(chonMau);
		thaoTac.add(veHinh);
		add(manHinhVe, BorderLayout.CENTER);
		add(thaoTac, BorderLayout.SOUTH);
	}	
	
	//Các hàm vẽ hình
	public void veHinhVuong(Graphics g, boolean hinhDac) {
		int canh = 100;
        int x = (manHinhVe.getWidth() - canh) / 2;
        int y = (manHinhVe.getHeight() - canh) / 2;
        if (hinhDac) {
            g.fillRect(x, y, canh, canh);
        } else {
            g.drawRect(x, y, canh, canh);
        }
	}
	public void veHinhChuNhat(Graphics g, boolean hinhDac) {
		int chieuDai = 150, chieuRong = 80;
        int x = (manHinhVe.getWidth() - chieuDai) / 2;
        int y = (manHinhVe.getHeight() - chieuRong) / 2;
        if (hinhDac) {
            g.fillRect(x, y, chieuDai, chieuRong);
        } else {
            g.drawRect(x, y, chieuDai, chieuRong);
        }
	}
	public void veHinhTron(Graphics g, boolean hinhDac) {
		int duongKinh = 100;
        int x = (manHinhVe.getWidth() - duongKinh) / 2;
        int y = (manHinhVe.getHeight() - duongKinh) / 2;
        if (hinhDac) {
            g.fillOval(x, y, duongKinh, duongKinh);
        } else {
            g.drawOval(x, y, duongKinh, duongKinh);
        }
	}
	public void veHinhDaGiac(Graphics g, boolean hinhDac) {
		int[] xPoints = {120, 170, 220, 170, 120};
        int[] yPoints = {100, 70, 100, 130, 130};
        int nPoints = 5;
        if (hinhDac) {
            g.fillPolygon(xPoints, yPoints, nPoints);
        } else {
            g.drawPolygon(xPoints, yPoints, nPoints);
        }
	}
}
