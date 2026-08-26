/*
NOME: verificarPar.cpp
AUTOR: Isa Vasconcelos
DATA: 25/08/2026
DESCRICAO: Programa para ler numero em funcao e verificar se eh par ou impar em outra funcao
*/

#include <stdio.h>

int lerNum();
void verificarParImpar(int);

int main(){
int num;
num = 0; 
num = lerNum();

verificarParImpar(num);
}

int lerNum(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    return num;
}

void verificarParImpar(int num){
     int quoc, res;
    quoc = num / 2;
    res = num - (quoc * 2);
     if(res == 0) {
        printf("PAR");
     } else {
        printf("IMPAR");
     }
}