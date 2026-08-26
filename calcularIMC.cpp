#include <stdio.h>
//Seção de importação
float calcularIMC(char, float, float);

int main(){
    char nome[50];
    float peso, altura, IMC;
    peso = altura = IMC = 0.0;
    printf("Escreva seu nome: ");
    scanf("%s", nome);
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Escreva sua altura: ");
    scanf("%f", &altura);
} 