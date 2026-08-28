/*
	Name: numeroNegativo.cpp
	Author: Isa Vasconcelos
	Date: 02/04/26 11:25
	Description:Algoritmo para ler um numero e exiba contagem regressiva ate seus numero negativado 
*/
#include <stdio.h>
main()
{
	int num, neg, cont;
	puts("Digite um numero positivo");
	scanf("%d", &num);
	neg= num - num - num;
	cont=num;
	while (cont > neg){
		printf("%d, ", cont);
		cont = cont - 1;
	}
	
	printf("%d ", cont);
	
}
