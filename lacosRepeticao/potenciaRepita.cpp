/*
	Name: potenciarepita.cpp
	Author: Isa Vasconcelos
	Date: 02/04/26 11:54
	Description: algortmo 'para fazer potencia com repita ate 
*/
#include <stdio.h>
main()
{
	int base, expo, poten, cont;
	base = expo = cont = 0;
	poten=1;
	puts("Digite a base da potencia");
	scanf("%d", &base);
	puts("Digite o expoente da potencia");
	scanf("%d", &expo);
	do{
		poten = poten * base;
		cont = cont + 1;  
	  }while(cont < expo);
	  printf("O resultado eh: %d", poten);
}

