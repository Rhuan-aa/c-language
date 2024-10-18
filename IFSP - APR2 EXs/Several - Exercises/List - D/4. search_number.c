#include <stdlib.h>
#include <stdio.h>

int* create_vector(int size){
    int num;
    int* vet_fun; 
    vet_fun = malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++){
        scanf("%d", &num);
        vet_fun[i] = num;
    }
    return vet_fun;
}

int search(int vet[], int size, int num){
    int find = 0;
    for (int i = 0; i < size; i++){
        if(vet[i] == num){
            return i;
        }
    }
    return -1;
}

int main(int argc, char const *argv[]){
    int N, X;
    scanf("%d", &N);
    int* vet = create_vector(N);
    scanf("%d", &X);
    printf("%d", search(vet, N, X));
    free(vet);
    return 0;
}
