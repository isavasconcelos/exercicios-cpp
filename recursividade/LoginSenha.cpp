/*
	Name: LoginSenha.cpp
	Author: Isa Vasconcelos
	Date: 28/10/26 10:14
	Description: Programa para simular um login e senha por meio de recursividade indireta
*/
//importação de biblioteca
#include<stdio.h>
#include<string.h>

//seção de prototipação
void verLogin();
void verSenha();

//variaveis globais
char user[] = "Usuario";
int senha = 1234;
int cont = 0;

main(){
	verLogin();		
	
}

//função p verificar login do user
void verLogin(){
	char login[20];
	printf("Login:");
	gets(login);
		if (strcmp(login, user)==0){ //string compare
			verSenha();
		} else {
			puts("Usuario incorreto! Tente novamente.");
			verLogin();
		}
}

// função p verificar senha do user
void verSenha(){
	int pwd; 
	printf("Senha: ");
	scanf("%d", &pwd);
	
	if (pwd == senha){
		puts("Login efetuado com sucesso!");
	} else {
		cont ++;
		if (cont == 3){
			cont = 0;
			fflush(stdin); //limpa o buffer do teclado
			verLogin();
		}	
		else 
		verSenha();
	}
}
