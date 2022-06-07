package MineField;

import java.util.Scanner;

public class Sistema_Principal {
	public static void main(String [] args) {
		int [][] matriz = new int [100][100];
		int opcao = 0,linhas,colunas,linhaD = 100,colunaD = 100,opcaoJn,quantidade,contador = 0;
		String aux, pegaLinhaD,pegaColunaD;
		boolean explodiu , avance = false;
		opcaoJn = 3;
		while (opcaoJn != 2){
			Scanner input = new Scanner(System.in);
			while (!avance) {
				System.out.println("Escolha a dificuldade ");
				System.out.println("1 - Fácil (9 X 9 - 10 minas)");
				System.out.println("2 - Médio (16 X 16 - 25 minas)");
				System.out.println("3 - Difícil (30 X 16 - 99 minas)");
				System.out.println("4 - Personalizado");
				try {
				    opcao = Integer.parseInt(input.next());
				    avance = true;
				} catch (NumberFormatException e) {
				    System.out.println("ERRO! Digite apenas números");
				}
			}
			avance = false;
			while(opcao>4||opcao<=0){
				while(!avance) {
					System.out.println("ERRO! Escolha a dificuldade novamente:");
					System.out.println("1 - Fácil (9 X 9 - 10 minas)");
					System.out.println("2 - Médio (16 X 16 - 25 minas)");
					System.out.println("3 - Difícil (30 X 16 - 99 minas)");
					System.out.println("4 - Personalizado");
					try {
					    opcao = Integer.parseInt(input.next());
					    avance = true;
					} catch (NumberFormatException e) {
					    System.out.println("ERRO! Digite apenas números");
					}
				}
				avance = false;
			}
			avance = false;
			Minas m = new Minas(opcao);
			m.preencher();
			matriz = m.getMatriz();
			Campo c = new Campo();
			linhas = m.getLinhas();
			colunas = m.getColunas();
			quantidade = m.getQuantidade();
			c.transforma(matriz,linhas,colunas);
			c.preencheCampoVisivel(linhas, colunas);
			c.mostraCampoVisivel(linhas, colunas,0,0);
			explodiu = false;
			avance = false;
			while (!explodiu){
				if(contador != 0) {
					System.out.println("Entre com Marcar ao invés de linha para realizar uma marcação: ");
				}
				while (!avance) {
					System.out.println("Entre com a linha desejada: ");
					try {
						pegaLinhaD = input.next();
						if(pegaLinhaD.equalsIgnoreCase("Marcar")) {
							c.Marcar(linhas, colunas);
						}
						else {
							linhaD = Integer.parseInt(pegaLinhaD);
							while(linhaD >= linhas) {
								System.out.println("ERRO! Entre novamente com a linha desejada: ");
								try {
								    linhaD= Integer.parseInt(input.next());
								} catch (NumberFormatException e) {
								    System.out.println("Digite apenas números");
								}
							}
						    avance = true;
						}
					} catch (NumberFormatException e) {
						System.out.println("ERRO! Digite apenas números");
					}
				}
				contador = 1;
				avance = false;
				while (!avance) {
					System.out.println("Entre com a coluna desejada: ");
					try {
						pegaColunaD = input.next();
						colunaD = Integer.parseInt(pegaColunaD);
						avance = true;
					} catch (NumberFormatException e) {
						    System.out.println("ERRO! Digite apenas números");
					}
				}
				avance = false;
				if(matriz[linhaD][colunaD] == 0){
					c.abre(matriz,linhaD,colunaD,linhas,colunas,quantidade);
					if((c.getAux() == c.getContador()) && (c.getAux() > 0) && (c.getContador() > 0)){
						explodiu = true;
					}
				}
				else {
					c.gameOver(matriz,linhas,colunas);
					explodiu = true;
				}
			}
			avance = false;
			while (!avance) {
				System.out.println("Deseja jogar novamente? Entre com 1 para Sim e 2 para Não");
				try {
					opcaoJn = Integer.parseInt(input.next());
					avance = true;
				} catch (NumberFormatException e) {
					System.out.println("ERRO! Digite apenas números");
				}
			}
			contador = 0;
			avance = false;
			while (opcaoJn < 0 || opcaoJn > 2) {
				while (!avance) {
					if (contador == 1) {
						System.out.println("Deseja jogar novamente? Entre com 1 para Sim e 2 para Não");
						contador = 0;
					}
					else {
						System.out.println("ERRO! Deseja jogar novamente? Entre com 1 para Sim e 2 para Não");
					}
					try {
						opcaoJn = Integer.parseInt(input.next());
						avance = true;
					} catch (NumberFormatException e) {
						System.out.println("ERRO! Digite apenas números");
						contador = 1;
					}
				}
			}
		}
	}
}
