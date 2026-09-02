/*
	Name:  passagemParametro.cpp
	Author: Isa Vasconcelos
	Date: 26/08/26 10:21
	Description: Programa para realizar a troca de valores entre variaveis demonstrando o conceito de passagem de parametros tanto por COPIA quanto por REFERENCIA.
*/

#include <stdio.h>

//prototipacao
void trocarNumeros(int *, int *);

main(){
	
	int a, b;
	a = 5; b = 10;
	printf("A: %d", a);
	printf("\nB: %d", b);
	trocarNumeros(&a, &b);
	printf("\n\nA: %d", a);
	printf("\nB: %d", b);
	
}

// funcao p fazer troca de valores entre as duas variaveis
//void trocarNumeros(int *a, int *b){
//	int aux = 0;
//	aux = *a;
//	*a = *b;
//	*b = aux;
//}

//funcao p fazer a troca de valores entre duas variaveis sem uso de variavel aux
//void trocarNumeros(int *a, int *b){
//	*a = *a + *b;
//	*b = *a - *b;
//	*a = *a - *b;
//}

//funcao p fazer a troca de valores entre duas variaveis sem uso de variavel aux
void trocarNumeros(int *a, int *b){
	*a = *a * *b;
	*b = *a / *b;
	*a = *a / *b;
	printf("\n\nA: %d", *a);
	printf("\nB: %d", *b);
}

