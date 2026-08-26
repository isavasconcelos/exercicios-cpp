/*
NOME: exibirContagem.cpp
AUTOR: Isa Vasconcelos
DATA: 25/08/2026
DESCRICAO: Programa para fazer contagem regressiva em funcao e exibir a palavra fogo ao terminar
*/

# include <stdio.h>

void exibirContagem(int);

main(){
int num;
printf("Digite um numero:");
scanf ("%d", &num);
exibirContagem(num);
}

void exibirContagem(int num){
    for (int i = num; i>= 0; i--){
        printf("%d\n", i);
    }
    printf("FOGOOOOOO!!!!");
} 