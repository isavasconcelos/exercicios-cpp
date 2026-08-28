/*
	Name: Soma.cpp 
	Author: Isabela Vasconcelos
	Date: 05/03/26 10:11
	Description: Programa para somar dois n�meros inteiros
*/

# include <stdio.h>
// padr�o  std = STandard / io = InputOutput

int a, b, soma;
main()
{
	a = 0; b = 0; soma = 0;
	puts("Programa para somar dois numeros");
	printf("Digite um numero inteiro para o valor de a: ");
		//printf imprime f - formata��o
		// puts put - put string 
		// gets get string 
	scanf("%d", &a);
		// & para armazenar o valor na mem�ria
		// scanf para ler um valor 
		// d = inteiro 
		// c = caract�r 
		// f = float
		// %d formatacao do num inteiro
	printf("Digite um numero inteiro para o valor de b: ");
	scanf("%d", &b);
	soma = a + b;
	printf("A soma de %d + %d eh: %d", a, b, soma);	
}
