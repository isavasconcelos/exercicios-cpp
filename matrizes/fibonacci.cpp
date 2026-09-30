/*
	Name: Fibonacci.cpp
	Author: Isa Vasconcelos
	Date: 30/09/26 09:53
	Description: Programa para exibir a sequencia de fibonacci com a quantidade de elementos escolhidos pelo usuario
*/

#include <stdio.h>

//sessao de prototipacao
void calcularFibonacci(int);
void imprimirFibonacci(int *, int);
void numeroAureo(int *, int);

main(){
	int elementos = 0;
	
	printf("Qual a quantidade de elementos da sequencia de fibonacci que devo mostrar?");
	scanf("%d",&elementos);
	calcularFibonacci(elementos);
}

//funcao p armazenar a sequencia de fibonacci em um vetor
void calcularFibonacci(int qtd){
	int fibo[qtd];
	fibo [0] = 1;
	fibo [1] = 1;
	
	for (int i = 2; i < qtd; i++){
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
	imprimirFibonacci(fibo, qtd);
}


//funcao p imprimir a sequencia de fibonacci
void imprimirFibonacci(int *F, int qtd){
	puts("Conteudo do vetor:");
	for (int i =0; i < qtd; i++){
		printf("%d|", F[i]);
	}	
	numeroAureo(F, qtd);
}

//funcao p exibir numero aureo
void numeroAureo (int *F, int qtd){
	puts("Conteudo do vetor em proporcao aurea:");
	for (int i = qtd-1 ; i > 0; i--){
		printf("%f|", (float)F[i]/F[i-1]);
	}
	
}

