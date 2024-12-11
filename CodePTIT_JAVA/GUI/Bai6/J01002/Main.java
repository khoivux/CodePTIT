package GUI.Bai6.J01002;

import javax.swing.JFrame;

import GUI.Bai6.J01001.RectangleCalculator;

public class Main {
	public static void main(String[] args) {
		SumCalculator program = new SumCalculator("");
		program.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		program.setLocationRelativeTo(null);
		program.setVisible(true);
	}
}
