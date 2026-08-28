/*
	Name: parimpar.cpp
	Author: Isabela Vasconcelos 
	Date: 19/03/26 10:17
	Description: Programa para determinar se um numero fornecido pelo usuario � par ou impar 
*/
//se�ao de importa��o
#include <stdio.h>
main()
{
	int num, quoc, resto;
	num = quoc = resto = 0;
	printf("digite um numero");
	scanf("%d", &num);	quoc = num / 2;
	resto = num - (quoc * 2);
		if (resto == 0)
		puts("O numero eh PAR!!");
			else 
		puts("O numero eh IMPAR!!");
		
		
		
}

