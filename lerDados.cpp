/*
	Name: lerdados.cpp
	Author: Isabela Vasconcelos
	Date: 19/03/26 11:47
	Description: programa para ler e exibir os dados de um usu�rio
*/
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	float altura; char sexo, empregado;
	altura = 0.0; 
	sexo = empregado = ' ';
	printf("Digite a sua altura: ");
	scanf ("%f", &altura);
	printf("Digite 'M' para masculino e 'F' para feminino");
	scanf (" %c", &sexo);
	printf("Digite 'S' se voc� for empregado e 'N' se n�o for");
	scanf (" %c", &empregado);
		if (altura < 1.60){
		printf("Voc� � uma pessoa baixa, ");
		}
			else if (altura <= 1.80){
			printf("Voc� � uma pessoa de altura mediana, ");
			}	
			 		else if( altura > 1.80){
					 	printf("Voc� � uma pessoa alta, ");
						 }

		if (sexo == 'M' || sexo ==  'm'){
		 printf("de sexo masculino, ");
		 }
		 	else {
		 	printf ("de sexo feminino, ");
			 }
			 
		if (empregado == 'S' || 's'){
			printf("e est� empregado.");
		}
			else if (empregado == 'N' || 'n'){
				printf("e n�o est� empregado.");
			}
}

