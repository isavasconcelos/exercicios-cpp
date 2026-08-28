/*
	Name: matriz.cpp
	Author: Isa Vasconcelos
	Date: 28/05/26 11:14
	Description: Programa para fazer a carga em uma matriz quadrada de ordem 3 
*/

#include <stdio.h>

main()
{//inicio
	int mat[3][3];
	int i, j, soma, maior, ordem = 3;
	i = 0;
	j = 0;
	soma = 0;
	
	puts("Digite 9 numeros inteiros");
	do
	{
		do
		{
			printf("[%d][%d]:", i, j);
			scanf("%d", &mat[i][j]);
			j =j + 1;
		}while(j < ordem);
		j = 0;
		i = i + 1;
	}while(i < ordem);
	
	// exibindo o conteudo da matriz
	for( i = 0; i<ordem; i++)
	{
			puts("");
	for(j = 0; j<ordem; j++)
	printf("%d\t", mat[i][j]);
		puts("\n");
	}
	
	//Exibindo os elementos da diagonal principal(DP)
	puts("\n\nExibindo os elementos da diagonal principal (DP):");
	for(i = 0; i < ordem; i++)
		for (j = 0; j < ordem; j++)
		if (i == j)
		{
		printf("%d|", mat[i][j]);
		soma = soma + mat[i][j];
		}
		printf("\n\n\nSoma da DP: %d", soma);
		
		if (soma > maior)
		maior = soma; 
				
			soma = 0;
			puts("\n\nExibindo os elementos acima da diagonal principal  (DP):");
	for(i = 0; i < ordem; i++)
		for (j = 0; j < ordem; j++)
		if (i < j)
		{
		printf("%d|", mat[i][j]);
		soma = soma+ mat[i][j];
		}
		printf("\n\n\nSoma da ADP: %d", soma);
		
			if (soma > maior)
		maior = soma; 
		
			soma = 0;
			puts("\n\nExibindo os elementos abaixo da diagonal principal (DP):");
	for(i = 0; i < ordem; i++)
		for (j = 0; j < ordem; j++)
		if (i > j )
		{
		printf("%d|", mat[i][j]);
		soma = soma + mat[i][j];
		}
		printf("\n\n\nSoma da ABDP: %d", soma);
		
			if (soma > maior)
		maior = soma; 
		
			soma = 0;
			//Exibindo os elementos da diagonal secundaria (DS)
		puts("\n\nExibindo os elementos da diagonal secundaria (DS):");
	for(i = 0; i < ordem; i++)
		for (j = 0; j < ordem; j++)
		if (i+j == ordem-1)
		{
		printf("%d|", mat[i][j]);
		soma = soma + mat[i][j];
		}
		printf("\n\n\nSoma da DS: %d", soma);
		
			if (soma > maior)
		maior = soma; 
		
			soma = 0;
			puts("\n\nExibindo os elementos acima da diagonal secundaria (DS):");
	for(i = 0; i < ordem; i++)
		for (j = 0; j < ordem; j++)
		if (i+j < ordem-1)
		{
		printf("%d|", mat[i][j]);
		soma = soma + mat[i][j];
		}
		printf("\n\n\nSoma da ADS: %d", soma);
		
			if (soma > maior)
		maior = soma; 
		
			soma = 0;
			puts("\n\nExibindo os elementos abaixo da diagonal secundaria (DS):");
	for(i = 0; i < ordem; i++)
		for (j = 0; j < ordem; j++)
		if (i+j > ordem-1 )
		{
		printf("%d|", mat[i][j]);
		soma = soma + mat[i][j];
		}
		printf("\n\n\nSoma da ABDS: %d", soma);
		
			if (soma > maior)
		maior = soma; 
		
		printf("%d", maior);
}//fim

