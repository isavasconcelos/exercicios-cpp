/*
	Name: recursaoII.cpp
	Author: Isa Vasconcelos
	Date: 28/10/26 09:55
	Description: Programa para demonstrar a recursividade INDIRETA
*/

#include <stdio.h>
//seção de prototipação
void lerNum();
void analisarNumero(int);

main(){
	lerNum();
	
}// fim do programa

void lerNum(){
	int num;
	printf("Digite um numero: ");
	scanf("%d", &num);
	analisarNumero(num);
}

//funcao p analisar um numero
void analisarNumero(int num){
	if (num == 0){
		return;
	}
	if (num%2 == 0){
		puts("Numero eh par");
	} else {
		puts ("Numero eh impar");
	}
	lerNum();
}

