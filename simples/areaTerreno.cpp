/*
	Name: AreaTerreno.cpp
	Author: Isabela Vasconcelos 
	Date: 05/03/26 11:25
	Description: Programa para calcular a area de um terreno
*/

// sessao de importacaoo
# include <stdio.h>
# include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	float frente, fundo, area; //variaveis reais
	frente = fundo = area = 0.0;
	puts("Programa para calcular a �rea de um terreno: ");
	puts("=============================================");
	printf("Digite a medida da frente:");
	scanf("%f", &frente);
	printf("Digite a medida do fundo:");
	scanf("%f", &fundo);
	area = frente * fundo;
	printf("A �rea do terreno � %.3f:", area );
}//fim do programa

