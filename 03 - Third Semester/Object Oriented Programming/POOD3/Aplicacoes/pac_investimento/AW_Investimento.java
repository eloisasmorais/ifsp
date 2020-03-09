package pac_investimento;

import java.awt.EventQueue;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;
import javax.swing.JButton;

public class AW_Investimento {

	private JFrame frame;
	private JTextField txtvp;
	private JTextField txtaxa;
	private JTextField txtprazo;
	private JTextField txtvf;
	private JTextField txtipo;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					AW_Investimento window = new AW_Investimento();
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
	public AW_Investimento() {
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
		
		JLabel lblInvestimento = new JLabel("INVESTIMENTO");
		lblInvestimento.setBounds(164, 12, 101, 15);
		frame.getContentPane().add(lblInvestimento);
		
		JLabel lblValorPresente = new JLabel("Valor Presente");
		lblValorPresente.setBounds(25, 40, 106, 15);
		frame.getContentPane().add(lblValorPresente);
		
		txtvp = new JTextField();
		txtvp.setBounds(285, 38, 114, 19);
		frame.getContentPane().add(txtvp);
		txtvp.setColumns(10);
		
		JLabel lblPrazo = new JLabel("Taxa");
		lblPrazo.setBounds(25, 67, 41, 15);
		frame.getContentPane().add(lblPrazo);
		
		txtaxa = new JTextField();
		txtaxa.setBounds(285, 69, 114, 19);
		frame.getContentPane().add(txtaxa);
		txtaxa.setColumns(10);
		
		JLabel lblPrazo_1 = new JLabel("Prazo");
		lblPrazo_1.setBounds(25, 94, 70, 15);
		frame.getContentPane().add(lblPrazo_1);
		
		txtprazo = new JTextField();
		txtprazo.setBounds(285, 100, 114, 19);
		frame.getContentPane().add(txtprazo);
		txtprazo.setColumns(10);
		
		JLabel lblValorFuturo = new JLabel("VALOR FUTURO");
		lblValorFuturo.setBounds(25, 156, 106, 15);
		frame.getContentPane().add(lblValorFuturo);
		
		txtvf = new JTextField();
		txtvf.setEditable(false);
		txtvf.setBounds(285, 154, 114, 19);
		frame.getContentPane().add(txtvf);
		txtvf.setColumns(10);
		
		JLabel lblTipoDeInvestimento = new JLabel("Tipo de investimento: ");
		lblTipoDeInvestimento.setBounds(25, 179, 157, 15);
		frame.getContentPane().add(lblTipoDeInvestimento);
		
		txtipo = new JTextField();
		txtipo.setEditable(false);
		txtipo.setBounds(200, 177, 199, 19);
		frame.getContentPane().add(txtipo);
		txtipo.setColumns(10);
		
		JButton btncalc = new JButton("Calcular");
		btncalc.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent arg0) {
				Investimento investimento = new Investimento();
				
				investimento.vp = Float.parseFloat(txtvp.getText());
				investimento.taxa = Float.parseFloat(txtaxa.getText());
				investimento.prazo = Integer.parseInt(txtprazo.getText());
				
				investimento.Calcular();
				investimento.Mostrar();

				txtvf.setText(String.valueOf(investimento.vf));
				txtipo.setText(String.valueOf(investimento.tipoInv));
			}
		});
		btncalc.setBounds(164, 214, 117, 25);
		frame.getContentPane().add(btncalc);
	}
}
