/*
	Name: Media.cpp
	Author: Isabela Vasconcelos
	Date: 05/03/26 12:01
	Description: programa para calculara m�dia de quatro n�meros inteiros
*/
#include <stdio.h>
#include <locale.h>

main()
{
	int a, b, c, d;
	float media;
	a = b = c = d = media = 0;
	puts ("Programa para calcular media");
	printf ("Digite o primeiro valor:");
	scanf ("%d", &a);
	printf ("Digite o segundo valor:");
		scanf ("%d", &b);
	printf ("Digite o terceiro valor:");
		scanf ("%d", &c);
	printf ("Digite o quarto valor:");
		scanf ("%d", &d);
		media = ( a + b + c + d) / 4;
		printf ("A media dos valores %d, %d, %d, %d eh: %f", a, b ,c ,d, media) ;

}

