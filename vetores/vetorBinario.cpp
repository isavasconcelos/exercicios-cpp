/*
	Name: vetorBinario.cpp
	Author: Isa Vasconcelos 
	Date: 14/05/26 11:06
	Description: Programa para carregar um vetor com elementos positivos e negativos 
	e copiar para um novo vetor tranformando em binario.
*/
# include <stdio.h>
main()
{
	int numeros[12], binario[12];
	int i = 0;
	
	puts("Carregue o vetor com 12 numeros positivos ou negativos: ");
	for (i; i < 12; i ++)
	scanf("%d", &numeros[i]);
	
	i = 0;
	// gerando o vetor de binarios - 0's e 1's
	while (i < 12){
		if (numeros[i] < 0)
		binario[i] = 0;
		else 
		binario[i] = 1;
		i++;
	}
	
	//Impressao do vetor numeros
		puts("\n\n===> Conteudo do vetor numeros <===");
	for (i = 0; i < 12; i++)
		printf("%d|", numeros[i]); // |pipe
	
		//Impressao do vetor binario
			puts("\n\n===> Conteudo do vetor binario <===");
	for (i = 0; i < 12; i++)
		printf("%d|", binario[i]); // |pipe
	
} // fim do programa

