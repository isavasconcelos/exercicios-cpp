/*
	Name: Function.cpp
	Author: Isa Vasconcelos 
	Date: 30/09/26 11:37
	Description: Fazer um programa que carregue um vetor com 25 elementos inteiros, passe-o para uma função e
	a partir dai faça a carga em uma matriz quadrada e depois imprima o vetor em uma função e a matriz em outra função.
*/

#include <stdio.h>

//sessao de prototipacao
void cargaMatriz(int *);
void imprimirVetor(int*);
void imprimirMatriz(int[][5]);


main(){
	int Vet[] = {2,34,54,67,7,34,2,3,45,6,45,3,4,5,6,7,8,9,87,68,94,45,34,70,56};
	
	for (int i = 0; i < 25; i++){
		printf("%d |", Vet[i]);
	}
	
	cargaMatriz(Vet);
	imprimirVetor(Vet);
}
	
// funcao p passar vetor p uma matriz
void cargaMatriz(int *vet){
	int c;
	int Mat[5][5];
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 5; j ++){
			Mat [i][j] = vet[c];
				c++;
		}
	}
	imprimirMatriz(Mat);
}

//funcao p imprimir Vetor
void imprimirVetor (int *vet){
	puts ("\nConteudo do vetor:");
	for (int i = 0; i < 25; i++){
		printf("%d |", vet[i]);
	}
}

//funcao p imprimir Matriz
void imprimirMatriz (int mat[][5]){
	
	puts ("\n Conteudo da Matriz:");
		 
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 5; j ++){
		printf("%d \t",mat[i][j]);
		}		
	printf("\n");
	}
}

