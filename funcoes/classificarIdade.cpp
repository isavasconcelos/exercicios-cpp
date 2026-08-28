/*
NOME: classificarIdade.cpp
AUTOR: Isa Vasconcelos
DATA: 25/08/2026
DESCRICAO: Programa para classificar idade na tabela
*/

#include <stdio.h>

void classificarIdade(char[50], int);

main(){
    char nome [50]; int idade;

    printf("Digite o seu nome: ");
    scanf("%s", &nome);
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    classificarIdade(nome, idade);
}

void classificarIdade(char nome [], int idade){
if (idade < 3 ){
    printf("%s, voce eh um bebe", nome);
} else if (idade < 13){
    printf("%s, voce eh uma crianca", nome);
} else if (idade < 20){
    printf("%s, voce eh adolescente", nome);
} else if (idade < 60){
    printf("%s, voce eh adulto", nome);
} else if (idade < 91){
    printf("%s, voce eh idoso", nome);
} else { 
    printf("%s, voce eh matusalem", nome);
}
}
