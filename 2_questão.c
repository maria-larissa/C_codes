#include <stdio.h>
void troca_elementos(int* vetor, int tam){
    for(int i=0 ;i <tam;i++){
        int aux;
        aux = vetor[i];
        vetor[i]= vetor[i+1];
        vetor[i+1]= aux;
        i++;
    }
}
int main(){
    int tam;
    printf("\nDigite o tamanho do vetor :");
    scanf("%d", &tam);
    int vetor[tam];
    printf("\nPreencha o vetor\n");
    for(int i=0; i<tam ; i++){
        printf("Posição[%d] = ", i+1);
        scanf("%d", &vetor[i]);
    }
    printf("\nvetor = [");
    for(int i=0; i<tam ; i++){
        printf("  %d", vetor[i]);
    }
    printf("  ]\n");
    troca_elementos(vetor, tam);
    printf("\nvetor modificado = [");
    for(int i=0; i<tam ; i++){
        printf("  %d", vetor[i]);
    }
    printf("  ]\n");
}