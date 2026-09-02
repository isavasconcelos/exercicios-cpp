/*
	Name:  passagemParametroGlobal.cpp
	Author: Isa Vasconcelos
	Date: 26/08/26 10:21
	Description: Programa para realizar a troca de valores entre variaveis demonstrando o conceito de passagem de parametros tanto por COPIA quanto por REFERENCIA.
*/

#include <stdio.h>

//prototipacao
void trocarNumeros();
	int a, b, aux =77; //variaveis globais
main(){
	//	int a, b; dentro do main eh variavel local
	a = 5;
	b = 10;
	printf("A: %d", a);
	printf("\nB: %d", b);
	trocarNumeros();
	printf("\nA: %d", a);
	printf("\nB: %d", b);
	
}

// funcao p fazer troca de valores entre as duas variaveis
void trocarNumeros(){
	int aux = 0;
	aux = a;
	a = b;
	b = aux;
		printf("\naux: %d", aux);
}
