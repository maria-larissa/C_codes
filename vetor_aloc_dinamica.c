#include <stdio.h>
#include <stdlib.h>
/*
*   O algoritmo tem objetivo de alocar dinamicamente vetores dinamicamente
*/
int main(){
    int n;
    printf("digite o tamanho do vetor: ");
    scanf("%d", &n);

    int *vet = (int*)malloc(n*sizeof(int));
    
    printf("\ndigite os valores\n");
    for(int i=0; i<n; i++){
        scanf("%d", (vet+i));
    }
    
    printf("\nVetor:");
    for(int i=0; i<n;i++){
        printf("%3d", vet[i]);
    }
    printf("\n");
    return 0;
}
