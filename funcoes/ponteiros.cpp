/*
	Name: ponteiros.cpp
	Author: Isa Vasconcelos
	Date: 26/08/26 11:55
	Description: Programa para manipular ponteiros
*/

#include <stdio.h>

main(){
	/*
	int a = 555;
	int *ptrA = &a; // * -> Variavel ponteiro | &a -> pega o endere�o de A
	printf("A: %d \n", a);
	printf("conteudo apontado por ptrA: %d \n", *ptrA); // Imprime o valor da variavel A
	printf("Endereco de A em hexadecimal: %p \n", &a);
	printf("Endereco de ptrA em hexadecimal: %p \n", &ptrA); 
	*/

	short int vetor[20]; // Vetor de inteiros
	for (int i = 0; i < 20; i++){
		printf("%p \n", &vetor[i]); //& sempre mostra o endere�o
	}
	
}


