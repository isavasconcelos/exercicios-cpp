/*
	Name: FibonacciVetor.cpp
	Author: Isa Vasconcelos
	Date: 14/05/26 12:07
	Description: Programa para carregar um vetor com os elementos da sequencia de fibonacci
*/
#include <stdio.h>

main()
{
	int ant, atual, prox, qtde, cont;
	ant = atual =1;
	qtde = prox = 0;
	
	printf("Quantos elementos de fibonacci devo mostrar?");
	scanf ("%d", &qtde);
	
	int fibo[qtde];
	fibo[0] = ant;
	fibo[1] = atual;
	cont = 2;
	while (cont < qtde)
	{
		prox = atual + ant;
		fibo[cont] = prox;
		ant = atual;
		atual = prox;
	cont++;
	}
	
		puts("\n\n===> Conteudo do vetor fibonacci <===");
	for (cont = 0; cont < qtde; cont++) 
		printf ("%d|", fibo[cont]); // |pipe

	
	
	
	
}// fim do programa

