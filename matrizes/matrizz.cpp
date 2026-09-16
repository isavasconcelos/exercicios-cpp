/*
	Name:  matriz.cpp
	Author: Isa Vasconcelos 
	Date: 16/09/26 10:00
	Description: programa para manipular matrizes dentro de uma funcao
*/

#include <stdio.h>

//sessao de prototipacao
void imprimirMatriz(int [][3]); //referencia da matriz

main(){
	// int vet[] = [6, 13, 89, 20, 45};
	//char semana[] = {"dom", "seg","ter","qua","qui","sex"sab"};
	// int mat[3][3]; //matriz quadrada de ordem 3 
	
	int mat[3][3] = {{7,8,2}, {0,1,4},{5,6,9}}; //hard code
	imprimirMatriz(mat);
	
}

//funcao p imprimir matriz
void imprimirMatriz(int M[][3]){
		puts("Conteudo da Matriz: ");
	for (int i = 0; i < 3; i++){//varia a linha
		for (int j = 0; j < 3; j++) //varia a coluna 
			printf("%d\t",  M[i][j]);
		puts("\n\n");
	}
}




















