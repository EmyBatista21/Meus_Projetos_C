#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    float peso, altura, imc;
    setlocale(LC_ALL, "Portuguese");

    printf("Insira seu peso (Ex:100):");
    scanf("%f", &peso);
    printf("Insira sua altura (Ex: 1,71):");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if (imc < 18.5) {
        printf("Seu imc: %f \n", imc);
        printf("Você está abaixo do peso");
    } else 
        if (imc >= 18.5 && imc <= 24.9) {
            printf("Seu imc: %f \n", imc);
            printf("Você está em peso normal");
        } else 
            if (imc >= 25 && imc <= 29.9) {
                printf("Seu imc: %f \n", imc);
                printf("Você está com sobrepeso");
            } else 
                if (imc >= 30 && imc <= 34.9) {
                    printf("Seu imc: %f \n", imc);
                    printf("Você está com obesidade grau I");
                } else 
                    if (imc >= 35 && imc <= 39.9) {
                        printf("Seu imc: %f \n", imc);
                        printf("Você está com obesidade grau II");
                    } else {
                        printf("Seu imc: %f \n", imc);
                        printf("Você está com obesidade grau III ou Mórbida");
                    }
    
}
