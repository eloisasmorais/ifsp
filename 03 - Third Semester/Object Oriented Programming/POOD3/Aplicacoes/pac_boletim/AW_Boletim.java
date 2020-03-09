package pac_boletim;

import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JLabel;
import java.awt.Font;
import javax.swing.JButton;
import javax.swing.JTextField;
import javax.swing.SwingConstants;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;

public class AW_Boletim {

	private JFrame frame;
	private JTextField txtnota1;
	private JTextField txtnota2;
	private JTextField txtnota3;
	private JTextField txtmedia;
	private JTextField txtsituacao;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					AW_Boletim window = new AW_Boletim();
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
	public AW_Boletim() {
		initialize();
	}

	/**
	 * Initialize the contents of the frame.
	 */
	private void initialize() {
		frame = new JFrame();
		frame.setBounds(100, 100, 420, 377);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.getContentPane().setLayout(null);
		
		JLabel lblNewLabel = new JLabel("Boletim");
		lblNewLabel.setFont(new Font("Tahoma", Font.PLAIN, 21));
		lblNewLabel.setBounds(166, 11, 86, 26);
		frame.getContentPane().add(lblNewLabel);
		
		JLabel lblNewLabel_1 = new JLabel("1a nota");
		lblNewLabel_1.setFont(new Font("Tahoma", Font.PLAIN, 18));
		lblNewLabel_1.setBounds(10, 63, 67, 26);
		frame.getContentPane().add(lblNewLabel_1);
		
		JLabel lblNewLabel_1_1 = new JLabel("2a nota");
		lblNewLabel_1_1.setFont(new Font("Tahoma", Font.PLAIN, 18));
		lblNewLabel_1_1.setBounds(10, 100, 67, 26);
		frame.getContentPane().add(lblNewLabel_1_1);
		
		JLabel lblNewLabel_1_2 = new JLabel("3a nota");
		lblNewLabel_1_2.setFont(new Font("Tahoma", Font.PLAIN, 18));
		lblNewLabel_1_2.setBounds(10, 137, 67, 26);
		frame.getContentPane().add(lblNewLabel_1_2);
		
		JLabel lblNewLabel_1_3 = new JLabel("M\u00E9dia");
		lblNewLabel_1_3.setFont(new Font("Tahoma", Font.PLAIN, 18));
		lblNewLabel_1_3.setBounds(10, 174, 67, 26);
		frame.getContentPane().add(lblNewLabel_1_3);
		
		JLabel lblNewLabel_1_4 = new JLabel("Situa\u00E7\u00E3o");
		lblNewLabel_1_4.setFont(new Font("Tahoma", Font.PLAIN, 18));
		lblNewLabel_1_4.setBounds(10, 211, 67, 26);
		frame.getContentPane().add(lblNewLabel_1_4);
		
		JButton btnNewButton = new JButton("Calcular");
		btnNewButton.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent arg0) {
				Boletim b = new Boletim();
				
				b.nota1 = Float.parseFloat(txtnota1.getText());
				b.nota2 = Float.parseFloat(txtnota2.getText());
				b.nota3 = Float.parseFloat(txtnota3.getText());
				
				b.CalcularMedia();
				
				b.MostrarSituacao();
				
				
				
				txtmedia.setText(String.valueOf(b.media));
				
				txtsituacao.setText(b.situacao);
			
			}
		});
		btnNewButton.setFont(new Font("Tahoma", Font.PLAIN, 16));
		btnNewButton.setBounds(155, 264, 106, 29);
		frame.getContentPane().add(btnNewButton);
		
		txtnota1 = new JTextField();
		txtnota1.setHorizontalAlignment(SwingConstants.RIGHT);
		txtnota1.setBounds(166, 69, 59, 20);
		frame.getContentPane().add(txtnota1);
		txtnota1.setColumns(10);
		
		txtnota2 = new JTextField();
		txtnota2.setHorizontalAlignment(SwingConstants.RIGHT);
		txtnota2.setColumns(10);
		txtnota2.setBounds(166, 106, 59, 20);
		frame.getContentPane().add(txtnota2);
		
		txtnota3 = new JTextField();
		txtnota3.setHorizontalAlignment(SwingConstants.RIGHT);
		txtnota3.setColumns(10);
		txtnota3.setBounds(166, 143, 59, 20);
		frame.getContentPane().add(txtnota3);
		
		txtmedia = new JTextField();
		txtmedia.setEditable(false);
		txtmedia.setHorizontalAlignment(SwingConstants.RIGHT);
		txtmedia.setColumns(10);
		txtmedia.setBounds(166, 180, 59, 20);
		frame.getContentPane().add(txtmedia);
		
		txtsituacao = new JTextField();
		txtsituacao.setEditable(false);
		txtsituacao.setHorizontalAlignment(SwingConstants.CENTER);
		txtsituacao.setColumns(10);
		txtsituacao.setBounds(166, 217, 136, 20);
		frame.getContentPane().add(txtsituacao);
	}
}