/*
	Name: somarMatrizes.cpp
	Author: Isa Vasconcelos
	Date: 16/09/26 11:47
	Description: programa para realizar a soma de duas matrizes por meio de funcoes  
*/

#include <stdio.h>

//sessao de prototipacao
void somarMatrizes(int [][3], int [][3]);
void imprimirMatrizes(int [][3], int [][3], int [][3]);


main(){
	int matA[3][3] = {{3, 6, 2}, {1, 4, 9}, {5, 6, 7}};
	int matB[3][3] = {{2, 1, 9}, {5, 3, 7}, {8, 2, 6}};
	somarMatrizes(matA, matB);
}


void somarMatrizes(int A[][3], int B[][3]){
	int matSoma[3][3];
	
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
					matSoma[i][j] = A[i][j] + B[i][j];
		}
	}
		imprimirMatrizes(A, B, matSoma);
}

void imprimirMatrizes(int A[][3], int B[][3], int C[][3]){
		puts("Conteudo da Matriz A: ");
	for (int i = 0; i < 3; i++){//varia a linha
		for (int j = 0; j < 3; j++){ //varia a coluna 
			printf("%d\t",  A[i][j]);
		}
			puts("\n\n");
	}
	
		puts("Conteudo da Matriz B: ");
	for (int i = 0; i < 3; i++){//varia a linha
		for (int j = 0; j < 3; j++){ //varia a coluna 
			printf("%d\t",  B[i][j]);
		}
			puts("\n\n");
	}
	
		puts("Conteudo da Matriz Soma: ");
	for (int i = 0; i < 3; i++){//varia a linha
		for (int j = 0; j < 3; j++){ //varia a coluna 
			printf("%d\t",  C[i][j]);
		}
		puts("\n\n");
	}
	
}


