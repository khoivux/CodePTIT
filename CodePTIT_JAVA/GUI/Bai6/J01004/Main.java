package GUI.Bai6.J01004;

import javax.swing.JFrame;

public class Main {
	public static void main(String[] args) {
		PrimeNumber app = new PrimeNumber("Kiểm tra số nguyên tố");
		app.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		app.setLocationRelativeTo(null);
		app.setVisible(true);
	}
}
