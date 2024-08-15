/*Faça um programa que leia uma número inteiro N e determine se ele é um número primo.*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portugues");
    int number, i;

    printf("Digite um número para verificação: ");
    scanf("%d", &number);

    if(number > 1){
        for (i = 1; i < number; i++){
            if ((number%i == 0) && (i != 1)){
                printf("O numero não é primo.");
            } else {
                printf("O numero é primo");
            }
        }
    } else {
        printf("O numero deve ser positivo e maior que um.");
    }
    
}