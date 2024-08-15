/*Dado um número natural N, fazer um algoritmo para determinar e escrever o número harmônico HN definido por

HN = 1 + 1/2 + 1/3 + 1/4 + ... + 1/N

Faça um algoritmo que leia N >= 1 e então calcule e escreva HN*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float HN = 1, N, i;
    

    printf("Digite o n�mero que ir� definir o harm�nico: ");
    scanf("%f", &N);

    if (N >= 1){
        for (i = 1; i < N; i++){
            HN = HN + (1/i);
        }
        printf("O numero harmonico �: %f", HN);
    } else {
        printf("Deve ser um numero positivo.");
    }
    
}
