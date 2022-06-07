package MineField;

import java.util.Scanner;

public class Campo {
	int [][] matrizCampo = new int [100][100];
	private int linhas, colunas,contador = 0,aux,quantidade,incrementador = 0;;
	private char [][] campoVisivel = new char [100][100];
	Scanner input = new Scanner (System.in);
	public void preencheCampoVisivel (int linhas, int colunas){
		for(int i = 0;i<linhas; i++){
			for(int j = 0; j<colunas;j++){
				campoVisivel[i][j] = '_';
			}
		}
	}
	public void transforma(int matriz [][],int linhas,int colunas) {
		int qtd=0;
		for(int i=0;i<linhas;i++){
			for(int j=0;j<colunas;j++){
				if(i>=1) {
					if(matriz[i-1][j]==1)
						qtd++;
					if(matriz[i-1][j+1]==1)
						qtd++;
				}
				if(i>=1 && j>=1) {
					if(matriz[i-1][j-1]==1)
						qtd++;
				}
				if(j>=1) {
					if(matriz[i][j-1]==1)
						qtd++;
					if(matriz[i+1][j-1]==1)
						qtd++;
				}
				if(matriz[i][j+1]==1)
					qtd++;
				if(matriz[i+1][j]==1)
					qtd++;
				if(matriz[i+1][j+1]==1)
					qtd++;
				matrizCampo[i][j]=qtd;
				qtd=0;
			}
		}
	}
	public void mostraCampoVisivel(int linhas,int colunas,int contador,int quantidade) {
		System.out.println(" Linhas");
		for(int i = 0;i<linhas;i++) {
			if(i >= 10) {
				System.out.print(i+"   ");
			}
			else {
				System.out.print(" "+i+"   ");
			}
			for(int j=0;j<colunas;j++) {
				if(j >= 10) {
					System.out.print(campoVisivel[i][j]+"  ");
				}
				else {
					System.out.print(campoVisivel[i][j]+" ");
				}
			}
			System.out.println("");
		}
		System.out.println("");
		System.out.print("     ");
		for (int j = 0;j<colunas;j++) {
			System.out.print(j+" ");
		}
		System.out.print("\tColunas\n");
		if ((contador == aux) && (contador > 0) && (aux > 0)) {
			System.out.println("\n\t\t PARABÉNS VC GANHOU");
		}
	}
	public void abre(int [][] matriz, int i , int j,int linhas, int colunas, int quantidade){
		aux = (linhas*colunas) - quantidade;
		if(matriz[i][j] == 0) {
			if(campoVisivel[i][j] == '_') {
				contador++;
			}
			campoVisivel[i][j] = Character.forDigit(matrizCampo[i][j],10);
		}
		if(matriz[i+1][j+1] == 0) {
			if(campoVisivel[i+1][j+1] == '_') {
				contador++;
			}
			campoVisivel[i+1][j+1] = Character.forDigit(matrizCampo[i+1][j+1],10);
		}
		if(matriz[i][j+1] == 0) {
			if(campoVisivel[i][j+1] == '_') {
				contador++;
			}
			campoVisivel[i][j+1] = Character.forDigit(matrizCampo[i][j+1],10);
		}
		if(matriz[i+1][j] == 0) {
			if(campoVisivel[i+1][j] == '_') {
				contador++;
			}
			campoVisivel[i+1][j] = Character.forDigit(matrizCampo[i+1][j],10);
		}
		mostraCampoVisivel(linhas,colunas,contador,quantidade);
	}
	public void gameOver(int [][] matriz,int linhas,int colunas) {
		for(int i = 0;i<linhas;i++) {
			for(int j = 0;j<colunas;j++) {
				if(matriz[i][j] == 1) {
					campoVisivel[i][j] = 'X';
				}
			}
		}
		mostraCampoVisivel(linhas,colunas,contador,quantidade);
	}
	public void Marcar (int linhas, int colunas) {
		int linhaD = 0, colunaD = 0;
		boolean fim = false, avance = false;
		avance = false;
		while (!fim) {
			while (!avance) {
				System.out.println("Entre com a linha desejada para a marcação: ");
				try {
				    linhaD = Integer.parseInt(input.next());
				    avance = true;
				} catch (NumberFormatException e) {
				    System.out.println("ERRO! Digite apenas números");
				}
			}
			while(linhaD >= linhas) {
				if(incrementador == 1) {
					System.out.println("Entre com a linha desejada para a marcação: ");
				}
				else {
					System.out.println("ERRO! Entre novamente com a linha desejada para a marcação: ");
				}
				try {
				    linhaD = Integer.parseInt(input.next());
				    avance = true;
				} catch (NumberFormatException e) {
				    System.out.println("ERRO! Digite apenas números");
				    incrementador = 1;
				}
			}
			avance = false;
			while (!avance) {
				System.out.println("Entre com a coluna desejada para a marcação: ");
				try {
				    colunaD = Integer.parseInt(input.next());
				    avance = true;
				} catch (NumberFormatException e) {
				    System.out.println("ERRO! Digite apenas números");
				}
			}
			while(colunaD >= colunas) {
				if(incrementador == 1) {
					System.out.println("Entre com a coluna desejada para a marcação: ");
				}
				else {
					System.out.println("ERRO! Entre novamente com a coluna desejada para a marcação: ");
				}
				try {
				    linhaD = Integer.parseInt(input.next());
				    avance = true;
				} catch (NumberFormatException e) {
				    System.out.println("ERRO! Digite apenas números");
				    incrementador = 1;
				}
			}
			if(campoVisivel[linhaD][colunaD] == '_') {
				campoVisivel[linhaD][colunaD] = '>';
				fim = true;
			}
			else {
				System.out.println("ERRO! Local já foi mostrado: ");
			}
		}
		mostraCampoVisivel(linhas,colunas,contador,quantidade);
	}
	public void setLinhas (int linhas){
		this.linhas = linhas;
	}
	public int getLinhas (){
		return linhas;
	}
	public void setColunas (int colunas){
		this.colunas = colunas;
	}
	public int getColunas (){
		return colunas;
	}
	public void setAux(int aux) {
		this.aux = aux;
	}
	public int getAux() {
		return aux;
	}
	public void setContador(int contador) {
		this.contador = contador;
	}
	public int getContador() {
		return contador;
	}
	public void setQuantidade(int quantidade) {
		this.quantidade = quantidade;
	}
	public int getQuantidade() {
		return quantidade;
	}
	public void setMatrizCampo (int [][] matrizCampo) {
		this.matrizCampo = matrizCampo;
	}
	public int [][] getMatrizCampo () {
		return matrizCampo;
	}
	public void setCampoVisivel(char [][] campoVisivel) {
		this.campoVisivel = campoVisivel;
	}
	public char [][]getCampoVisivel() {
		return campoVisivel;
	}
}
