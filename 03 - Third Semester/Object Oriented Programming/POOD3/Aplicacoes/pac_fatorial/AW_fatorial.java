package pac_fatorial;

import java.awt.EventQueue;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;
import javax.swing.JButton;

public class AW_fatorial {

	private JFrame frame;
	private JTextField txtnum;
	private JTextField txtfat;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					AW_fatorial window = new AW_fatorial();
					window.frame.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	/**
	 * Create the application.
	 */
	public AW_fatorial() {
		initialize();
	}

	/**
	 * Initialize the contents of the frame.
	 */
	private void initialize() {
		frame = new JFrame();
		frame.setBounds(100, 100, 450, 300);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.getContentPane().setLayout(null);
		
		JLabel lblFatorial = new JLabel("FATORIAL");
		lblFatorial.setBounds(185, 12, 66, 15);
		frame.getContentPane().add(lblFatorial);
		
		JLabel numero = new JLabel("Número");
		numero.setBounds(60, 60, 55, 15);
		frame.getContentPane().add(numero);
		
		txtnum = new JTextField();
		txtnum.setBounds(279, 58, 114, 19);
		frame.getContentPane().add(txtnum);
		txtnum.setColumns(10);
		
		JLabel txtfatorial = new JLabel("Fatorial");
		txtfatorial.setBounds(60, 103, 70, 15);
		frame.getContentPane().add(txtfatorial);
		
		txtfat = new JTextField();
		txtfat.setEditable(false);
		txtfat.setBounds(279, 101, 114, 19);
		frame.getContentPane().add(txtfat);
		txtfat.setColumns(10);
		
		JButton btncalc = new JButton("Calcular");
		btncalc.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent arg0) {
				Fatorial fat = new Fatorial();
				
				fat.num = Integer.parseInt(txtnum.getText());
				
				fat.calcular();
				
				txtfat.setText(String.valueOf(fat.res));
			}
		});
		btncalc.setBounds(163, 178, 117, 25);
		frame.getContentPane().add(btncalc);
	}

}
