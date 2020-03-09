package pac_boletim;

public class Boletim {
	public float nota1;
	public float nota2;
	public float nota3;
	public float media;
	public String situacao;
	
	public float CalcularMedia() {
		media = (nota1 + nota2 + nota3) / 3;
		
		return media;
	}
	
	public String MostrarSituacao() {
		if(media >=6 )
			situacao = "Aprovado";
		
		if(media >=3 && media < 6)
			situacao = "Exame";
		
		if(media < 3)
			situacao = "Reprovado";
		
		return situacao;
	}

}