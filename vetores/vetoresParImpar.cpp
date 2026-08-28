/*
	Name: vetoresParImpar.cpp
	Author: Isa Vasconcelos 
	Date: 14/05/26 11:31
	Description: Programa para separar numeros pares dos impares em vetores distintos
*/ 

#include <stdio.h>

main()
{
	int par[20], impar[20];
	int p, i, cont, num;
	p = i = cont = num = 0;
	puts("Programa para separar numeros PARES dos numeros IMPARES ");

// carga do vetor
	do{
	
	printf("%do num:  ", cont +1);
	scanf("%i", &num);
		if (num%2 == 0)
		{
			par[p] = num;
			p++;
		}
		else
		{
			impar[i] = num;
			i++;
		}
		cont++;
		}while(cont < 20);

		puts("\nConteudo do vetor par: ");
		cont = 0;
		while (cont < p)
		{
			printf("%d|",par[cont]);
			cont++;
		}
		
			puts("\nConteudo do vetor impar: ");
		cont = 0;
		while (cont < i)
		{
			printf("%d|",impar[cont]);
			cont++;
		}
		
}// fim do main
