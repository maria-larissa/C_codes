#include <stdio.h>
/*
*   O algoritmo troca os elementos do vetor dois a dois.
*/

void troca_elementos(int* vetor, int tam);

int main(){
    int tam;
    printf("\nDigite o tamanho do vetor :");
    scanf("%d", &tam);
    
    //Cria e preenche o vetor
    int vetor[tam];
    printf("\nPreencha o vetor\n");
    for(int i=0; i<tam ; i++){
        printf("Posição[%d] = ", i+1);
        scanf("%d", &vetor[i]);
    }
    
    troca_elementos(vetor, tam);
    
    //Printa o vetor depois de trocar os elementos
    printf("\nvetor modificado = [");
    for(int i=0; i<tam ; i++){
        printf("  %d", vetor[i]);
    }
    printf("  ]\n");
    
    return 0;
}

//Função troca elementos dois a dois
void troca_elementos(int* vetor, int tam){
    for(int i=0 ;i <tam;i++){
        int aux;
        aux = vetor[i];
        vetor[i]= vetor[i+1];
        vetor[i+1]= aux;
        i++;
    }
}
