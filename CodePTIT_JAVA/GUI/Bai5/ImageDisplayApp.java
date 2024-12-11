package GUI.Bai5;

import javax.swing.*;
import javax.swing.filechooser.FileNameExtensionFilter;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.File;
import javax.imageio.ImageIO;
import java.awt.image.BufferedImage;
import java.io.IOException;

public class ImageDisplayApp extends JFrame {
    private JPanel imagePanel;

    public ImageDisplayApp() {
        setTitle("Image Viewer");
        setSize(1500, 1000);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);

        // Panel chứa các ảnh
        imagePanel = new JPanel();
        imagePanel.setLayout(new FlowLayout());
        JScrollPane scrollPane = new JScrollPane(imagePanel);
        add(scrollPane, BorderLayout.CENTER);

        // Nút chọn ảnh
        JButton selectImageButton = new JButton("Chọn ảnh");
        selectImageButton.addActionListener(new SelectImageListener());
        add(selectImageButton, BorderLayout.SOUTH);
    }

    private class SelectImageListener implements ActionListener {
        @Override
        public void actionPerformed(ActionEvent e) {
            JFileChooser fileChooser = new JFileChooser();
            fileChooser.setFileFilter(new FileNameExtensionFilter("Image Files", "jpg", "png", "gif", "bmp"));
            int option = fileChooser.showOpenDialog(ImageDisplayApp.this);

            if (option == JFileChooser.APPROVE_OPTION) {
                File file = fileChooser.getSelectedFile();
                try {
                    BufferedImage image = ImageIO.read(file);
                    ImageIcon imageIcon = new ImageIcon(image);
                    JLabel imageLabel = new JLabel();
                    imageLabel.setIcon(imageIcon);

                    // Cho phép thay đổi kích thước ảnh theo khung nhìn
                    imageLabel.setPreferredSize(new Dimension(image.getWidth(), image.getHeight()));
                    imagePanel.add(imageLabel);
                    imagePanel.revalidate(); // Cập nhật lại giao diện
                } catch (IOException ioException) {
                    JOptionPane.showMessageDialog(ImageDisplayApp.this, "Không thể mở ảnh", "Lỗi", JOptionPane.ERROR_MESSAGE);
                }
            }
        }
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            new ImageDisplayApp().setVisible(true);
        });
    }
}
