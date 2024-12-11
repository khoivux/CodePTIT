package GUI.Bai2;

import javax.swing.JFrame;

public class Main {
	public static void main(String[] args) {
		Drawer drawer = new Drawer("Drawer");
		drawer.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		drawer.setLocationRelativeTo(null);
		drawer.setVisible(true);
	}
}
