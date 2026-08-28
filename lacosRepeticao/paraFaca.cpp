/*
	Name: ParaFaca.cpp
	Author: Isa Vasconcelos
	Date: 02/04/26 10:48
	Description: Algoritmo para demonstrar a estrutura de repeti��o Para... Fa�a
*/
#include<stdio.h>
main()
{
	int soma, cont, num;
float media = 0.0;
soma=num=0;

	puts("Digite 10 numeros inteiros:");
	puts("============================");
	
	for(cont=0;cont<10;cont++)
	{
	printf("%do num:", cont +1);
	scanf("%d", &num);
	soma = soma + num;
	}	
	
	media =(float) soma/cont;
	printf("A media eh: %.3f", media);
	
}

