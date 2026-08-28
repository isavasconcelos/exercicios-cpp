/*
	Name: EnquantoFaca.cpp
	Author: Isa Vasconcelos
	Date: 02/04/26 10:31
	Description: Algoritmo para demonstrar a utiliza��o do enqunto... fa�a
*/
#include <stdio.h>
main()
{
int soma, cont, num;
float media = 0.0;
soma=cont=num=0;

	puts("Digite 10 numeros inteiros:");
	puts("============================");
	
	while(cont == 10)
	{
	printf("%do num:", cont+1);
	scanf("%d", &num);
		soma = soma + num;
		cont = cont + 1;	
	}	
	
	media =(float) soma/cont;
	printf("A media eh: %.3f", media);
	
}
