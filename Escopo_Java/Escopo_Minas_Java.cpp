package MineField;

import java.util.Scanner;

public class Minas {
	private int [][]matriz = new int [100][100];
	private int quantidade,opcao,linhas = 0,colunas = 0;
	boolean avance = false;
	Scanner input = new Scanner(System.in);
	Campo campo = new Campo();
	public Minas(int opcao) {
		this.opcao=opcao;
	}
	public void preencher() {
		int k=0,i,j,contador = 0;
		if(opcao == 1){
			quantidade=10;
			linhas = 9;
			colunas = 9;
		}
		else if (opcao == 2){
			quantidade=25;
			linhas = 16;
			colunas = 16;
		}
		else if (opcao == 3){
			quantidade=99;
			linhas = 30;
			colunas = 16;
		}
		else if (opcao == 4){
			while (!avance) {
				System.out.println("Entre com a quantidade de Linhas (Máximo de 99): ");
				try {
				    linhas = Integer.parseInt(input.next());
				    avance = true;
				} catch (NumberFormatException e) {
				    System.out.println("ERRO! Digite apenas números");
				}
			}
			avance = false;
			while (linhas > 99 || linhas < 0){
				while (!avance) {
					if(contador == 1) {
						System.out.println("Entre com a quantidade de linhas (Máximo de 99): ");
						contador = 0;
					}
					else {
						System.out.println("ERRO! Entre com a quantidade de Linhas (Máximo de 99): ");
					}
					try {
					    linhas = Integer.parseInt(input.next());
					    avance = true;
					} catch (NumberFormatException e) {
					    System.out.println("ERRO! Digite apenas números");
					    contador = 1;
					}
				}
			}
			contador = 0;
			avance = false;
			while (!avance) {
				System.out.println("Entre com a quantidade de Colunas (Máximo de 99): ");
				try {
				    colunas = Integer.parseInt(input.next());
				    avance = true;
				} catch (NumberFormatException e) {
				    System.out.println("ERRO! Digite apenas números");
				}
			}
			avance = false;
			while (colunas > 99 || linhas < 0){
				while (!avance) {
					if (contador == 1) {
						System.out.println("Entre com a quantidade de Colunas (Máximo de 99): ");
						contador = 0;
					}
					else {
						System.out.println("ERRO! Entre com a quantidade de Colunas (Máximo de 99): ");
					}
					try {
					    colunas = Integer.parseInt(input.next());
					    avance = true;
					} catch (NumberFormatException e) {
					    System.out.println("ERRO! Digite apenas números");
					    contador = 1;
					}
				}
			}
			contador = 0;
			avance = false;
			while (!avance) {
				System.out.println("Entre com a quantidade de Minas: ");
				try {
				    quantidade = Integer.parseInt(input.next());
				    avance = true;
				} catch (NumberFormatException e) {
				    System.out.println("ERRO! Digite apenas números");
				}
			}
			avance = false;
			int aux = linhas * colunas;
			while (aux <= quantidade || quantidade < 0){
				while (!avance) {
					if (contador == 1) {
						System.out.println("Quantidade inválida de minas. Entre novamente com a quantidade de Minas: ");
						contador = 0;
					}
					else {
						System.out.println("ERRO! Quantidade inválida de minas. Entre novamente com a quantidade de Minas: ");
					}
					try {
					    quantidade = Integer.parseInt(input.next());
					    avance = true;
					} catch (NumberFormatException e) {
					    System.out.println("ERRO! Digite apenas números");
					    contador = 1;
					}
				}
			}
			contador = 0;
			avance = false;
		}
		while(k<quantidade) {
			i = (int)(Math.random()*linhas);
			j = (int)(Math.random()*colunas);
			if(matriz[i][j]==0) {
				matriz[i][j]=1;
				k++;
			}
		}
	}
	public void mostrar() {
		for(int i=0;i<linhas;i++) {
			for(int j=0;j<colunas;j++) {
				System.out.print(matriz[i][j]+" ");
			}
			System.out.println("");
		}
	}
	public void setQuantidade(int quantidade){
		this.quantidade=quantidade;
	}
	public int getQuantidade(){
		return quantidade;
	}
	public void setOpcao(int opcao){
		this.opcao=opcao;
	}
	public int Opcao(){
		return opcao;
	}
	public int [][] getMatriz() {
		return matriz;
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
}
