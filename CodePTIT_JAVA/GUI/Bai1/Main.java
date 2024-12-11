package GUI.Bai1;

import javax.swing.JFrame;

public class Main {
	public static void main(String[] args) {
		ColorBox test = new ColorBox("My ColorBox");
		test.setSize(600, 700);
		test.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		test.setLocationRelativeTo(null);
		test.setVisible(true);
	}
}
