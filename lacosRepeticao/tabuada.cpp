/*
	Name: Tabuada.cpp
	Author: Isa Vasconcelos
	Date: 02/04/26 11:43
	Description: Algoritmo para fazer tabuada
*/
#include <stdio.h>
main()
{
	int num, cont, multi =0;
	printf("Digite um numero para calcular a sua tabuada: ");
	scanf("%d", &num);
	
	for(cont=0; cont <=10; cont++)
	{
	multi = num * cont;
	printf("%d x %d = %d \n", num, cont, multi);	
	}
}

