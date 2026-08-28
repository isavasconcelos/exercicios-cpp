/*
	Name: Perimetro.cpp
	Author: Isabela Vasconcelos
	Date: 05/03/26 11:50
	Description: Programa para calcular perimetro
*/

#include <stdio.h>
#include <locale.h>

main()
{
	 float raio, perimetro;
	 raio = perimetro = 0.0;
	 puts ("Programa para calcular o perimetro de uma circunferencia");
	 printf ("Digite o raio da circunferencia:");
	 scanf ("%f", &raio);
	 perimetro = 2 * 3.1416 * raio;
	 printf ("O perimetro da circunferencia cujo raio eh %f eh: %.3f", raio, perimetro);
}//fim do programa

