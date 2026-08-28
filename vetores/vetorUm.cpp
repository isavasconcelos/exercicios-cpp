/*
	Name: VetorUm.cpp
	Author: Isa Vasconcelos
	Date: 14/05/26 10:18
	Description: Programa para realizar opera��es com arrays unidimensionais (vetores)
*/

#include <stdio.h>

main()
{
	int vet[10], i;
	puts("Digite 10 numeros inteiros: ");
	
	// Fazer a carga no vetor com 10 numeros inteiros	
	i = 0;
	do
	{
		printf("Digite o %do numero: ", i+1);
	scanf("%i", &vet[i]);
	i++;	
	}while (i < 10);
	
	i = 0;
	
	puts("\n\n===> Conteudo do vetor <===");
	while(i < 10)
	{
		printf ("%d|", vet[i]); // |pipe
 		i++;
	}
	
	i = i-1;
	
		puts("\n\n===> Conteudo do vetor ao contrario com while <===");
	while(i > -1)
	{
		printf ("%d|", vet[i]); // |pipe
 		i--;
	}
	
		puts("\n\n===> Conteudo do vetor ao contrario com for <===");
	for (i = 9; i > -1; i--) {
		printf ("%d|", vet[i]); // |pipe
}
}

