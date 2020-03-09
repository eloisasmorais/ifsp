package pac_investimento;

public class Investimento {
	public float vp, taxa;
	public int prazo;
	public double vf;
	public String tipoInv;
	
	public Double Calcular() {
		vf = vp * Math.pow(1 + taxa, prazo);
		
		return vf;
	}
	
	
	public String Mostrar() {
		if (prazo >= 24 && vf >= 3000) {
			tipoInv = "Poupança";
		} else if (prazo >= 12 && vf <= 15000) {
			tipoInv = "Renda Fixa (CDB e LC)";
		} else if (prazo <= 6 && vf <= 10000) {
			tipoInv = "Renda Variável (Fundos e Mercados)";
		} else {
			tipoInv = "Rever investimento";
		}
		
		
		return tipoInv;
	}
}
