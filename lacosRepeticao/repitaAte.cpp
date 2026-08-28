/*
	Name: Repitate.cpp
	Author: Isa Vasconcelos
	Date: 02/04/26 09:56
	Description: Programa para demonstrar a utiliza��o da estrutura de repeti��o repita at�
*/

#include <stdio.h>
main()
{
	int cont, num, soma;
	float media;
	
	cont = num = soma =0; media = 0.0;
	
	puts("Digite 10 numeros inteiros:");
	puts("============================");
	
	do
	{
		printf("%d num:", cont+1);
		scanf("%d", &num);
		soma = soma + num;
		cont = cont + 1;
	} while(cont <= 5);
		media = (float)soma/cont;
		printf("Media: %.2f", media);
		
}//fim do programa

