package tela;

import java.util.Scanner;

import controller.AlunoController;

public class MenuEscolaInterface {
	public void mostrarMenu() {
		Scanner opcaoMenu = new Scanner(System.in);		
		int opcao = 0;
		AlunoController alunoController = new AlunoController();
		
		do{
			System.out.println("1. Cadastrar um Aluno");
			System.out.println("2. Listar um Aluno");
			System.out.println("3. Sair");
			System.out.print  ("Escolha uma Opção: ");
			opcao = opcaoMenu.nextInt();
			
			switch (opcao) {
			case 1: 
					alunoController.cadastrar();
					break;
				
			case 2:
					alunoController.visualisar();
					break;
			case 3:
				
			}
		} while(opcao !=3);
	}
}
