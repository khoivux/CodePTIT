package GUI.Bai1;

import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.Dimension;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.*;

public class ColorBox extends JFrame implements ActionListener{
	private String[] colors = {"Xanh", "Đỏ","Tím","Vàng"};
	private JPanel panel1 = new JPanel();;
	private JButton but;
	private JComboBox<String> comboBox = new JComboBox<>();
	public ColorBox(String title) {
		setTitle(title);
		setLayout(new BorderLayout());
		
		panel1.setBackground(Color.BLUE);
		add(panel1, BorderLayout.CENTER);
		
		JPanel panel2 = new JPanel();
		add(panel2, BorderLayout.SOUTH);
		
		but = new JButton("OK");
		for(int i = 0; i < colors.length; i++) {
			comboBox.addItem(colors[i]);
		}
		//p2.add(but);
		panel2.add(comboBox);
		//but.addActionListener(this);
		comboBox.addActionListener(this);
	}
	@Override
	public void actionPerformed(ActionEvent arg0) {
		String selectedColor = (String) comboBox.getSelectedItem();
		if(selectedColor == "Xanh") panel1.setBackground(Color.BLUE);
		if(selectedColor == "Đỏ") panel1.setBackground(Color.RED);
		if(selectedColor == "Tím") panel1.setBackground(Color.MAGENTA);
		if(selectedColor == "Vàng") panel1.setBackground(Color.YELLOW);
	}
}
