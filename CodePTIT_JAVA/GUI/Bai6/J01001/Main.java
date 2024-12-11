package GUI.Bai6.J01001;

import javax.swing.JFrame;

public class Main {
	public static void main(String[] args) {
		RectangleCalculator program = new RectangleCalculator("Tính chu vi diện tích");
		program.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		program.setLocationRelativeTo(null);
		program.setVisible(true);
	}
}
