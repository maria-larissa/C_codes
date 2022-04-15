#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("digite o tamanho do vetor: ");
    scanf("%d", &n);

    //alocando um vetor de inteiro dinamicamente
    /*(int*) ---> cast para a alocação retornar um ponteiro de inteiros
     n*sizeof(int) ---> será alocada memoria do tamanho de int n vezes*/
    int *vet = (int*)malloc(n*sizeof(int));
    printf("\ndigite os valores\n");
    for(int i=0; i<n; i++){
        //não é preciso usar "&" apenas o nome do ponteiro + constante
        //(vet+i) é o endereço da posição, uso para colocar valores dentro do vetor
        scanf("%d", (vet+i));
    }
    printf("\nVetor:");
    for(int i=0; i<n;i++){
        //vet[i] é o valor dentro da posição, uso pra acessar valores dentro do vetor
        printf("%3d", vet[i]);
    }
    printf("\n");
    return 0;
}