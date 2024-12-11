package GUI.Bai3;

import javax.swing.JFrame;

public class Main {
	public static void main(String[] args) {
		ClockApp app = new ClockApp("Dong ho");
		app.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		app.setLocationRelativeTo(null);
		app.setVisible(true);
	}
}
