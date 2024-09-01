/*Faça um algoritmo que leia 3 valores inteiros A, B e C. Coloque-os em ordem crescente 
(ou seja, ao final A deve armazenar o menor valor, C o maior e B o valor do meio). Utilize 
o modelo abaixo apresentado no final do exercício, modificando apenas o processamento*/

#include <stdio.h>
#include <stdlib.h>

int maior_3_numeros (int x, int y, int z){
    if (x > y && x > z){
        return x;
    } if (y > z){
        return y;
    } 
    return z;
}

int maior_2_numeros(int x, int y){
    if (x > y){
        return x;
    }
    return y;
}

int main(int argc, char const *argv[])
{
    int num_1, num_2, num_3;

    printf("Digite o valor do primeiro numero: ");
    scanf("%d", &num_1);
    printf("Digite o valor do segundo numero: ");
    scanf("%d", &num_2);
    printf("Digite o valor do terceiro numero: ");
    scanf("%d", &num_3);

    if (maior_3_numeros(num_1, num_2, num_3) == num_1){
        if (maior_2_numeros(num_2, num_3) == num_2){
            printf("%d, %d, %d\n", num_3, num_2, num_1);
        } else {
            printf("%d, %d, %d\n", num_2, num_3, num_1);
        }
    } else if (maior_3_numeros(num_1, num_2, num_3) == num_2){
        if (maior_2_numeros(num_1, num_3) == num_1){
            printf("%d, %d, %d\n", num_3, num_1, num_2);
        } else {
            printf("%d, %d, %d\n", num_1, num_3, num_2);
        }
    } else {
        if (maior_2_numeros(num_1, num_2) == num_1){
            printf("%d, %d, %d\n", num_2, num_1, num_3);
        } else {
            printf("%d, %d, %d\n", num_1, num_2, num_3);
        }
    }

    return 0;
}
