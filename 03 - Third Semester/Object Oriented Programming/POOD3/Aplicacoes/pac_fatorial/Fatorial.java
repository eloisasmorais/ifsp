package pac_fatorial;

public class Fatorial {
	public int num;
	public long res = 1;
	
	public long calcular() {
		for (int i = num; i >= 2; i--) {
			res *= i;
		}
		
		return res;
	}
}
