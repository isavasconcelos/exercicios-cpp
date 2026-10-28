/*
	Name: banco.cpp
	Author: Isa Vasconcelos
	Date: 28/10/26 10:55
	Description: programa que realizara operações de um banco com recursividade
*/

#include <stdio.h>
#include <windows.h>

//seção de prototipação
void consultarSaldo();
void realizarDeposito();
void efetuarSaque();
void trocarSenha();
void verSenha();
void verLogin();

//variaveis globais
char user[] = "isabela";
int senha = 1234;
int cont = 0;
float saldo = 20.000;

main(){
	int opc = 0;
	printf("Qual operacao vc deseja realizar? opcoes abaixo: \n");
	printf("\n1 - Consultar Saldo\n2 - Realizar Deposito\n3 - Efetuar Saque\n4 - Trocar Senha\n5 - Sair do programa\n");
	scanf("%d", &opc);
	switch(opc)
	{
		case 1: consultarSaldo();
		break;
		
		case 2: realizarDeposito();
		break;
		
		case 3: efetuarSaque();
		break;
		
		case 4:	trocarSenha();
		break;
		
		case 5: exit(0);
		
		default: puts("Invalido! Escolha outra opcao.");
	}// fim do switch
	
}// fim do main


void consultarSaldo(){
	printf("Para consultar seu saldo eh necessario colocar login e senha:\n");
	verLogin();
	printf("Seu saldo eh: %.3f", saldo);
}

void realizarDeposito(){
	printf("Para realizar deposito eh necessario colocar o login\n");
	
}

void efetuarSaque(){
	float valor;
	printf("Para efetuar saque eh necessario inserir login e senha\n");
	verLogin();
	printf("Digite o valor do saque: ");
	scanf("%f", valor);
	if (valor < saldo){
		saldo = saldo - valor;
		printf("%f", saldo);
	} else {
		puts("Nao ha dinheiro suficiente para o saldo");
	}
} 

void trocarSenha(){
	printf("Para trocar a senha eh necessario colocar a senha\n");
	
}

void verLogin(){
	char login[20];
	printf("Login:");
	fflush(stdin);
	gets(login);
		if (strcmp(login, user)==0){ //string compare
			verSenha();
		
		} else {
			puts("Usuario incorreto! Tente novamente.");
			verLogin();
		}
}

void verSenha(){
		int pwd; 
	printf("Senha: ");
	scanf("%d", &pwd);
	
	if (pwd == senha){
		
	} else {
		cont ++;
		if (cont == 3){
			cont = 0;
			fflush(stdin); //limpa o buffer do teclado
			puts("Conta Bloquada!");
			verLogin();
		}	
		else 
		verSenha();
	}
}

