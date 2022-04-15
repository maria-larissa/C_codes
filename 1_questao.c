#include <stdio.h>
#include <stdlib.h>

typedef struct vacinados{
    int codigo;
    int dose_1;
    int dose_2;
    int idade;
}Vacinados;

int pessoas_1_sim_2_nao(Vacinados *vetor, int tam){
    int cont=0;
    for(int i=0; i<tam ; i++){
        if(vetor[i].dose_1 == 1 && vetor[i].dose_2 == 2){
            cont++;
        }
    }
    return cont;
}

float mediaNtomaramVacina(Vacinados* vetor, int tam){
    int cont=0;
    for(int i=0; i<tam; i++){
        if(vetor[i].dose_1 == 2 && vetor[i].dose_2 == 2){
            cont++;
        }
    }
    float media = (float)cont / tam;
    return media;
}

/*
Crie uma função que tenha como parâmetro um vetor de pessoas e o seu tamanho. A
função deve retornar o endereço inicial de um vetor de inteiros (alocado na memória
heap). Os elementos do vetor devem ser os códigos das pessoas que tomaram a
primeira dose e não tomaram a segunda. Além disso, deve ser colocado o valor -1
na última posição desse vetor. Por exemplo, supondo que no vetor de pessoas os
códigos 4, 5 e 10 são as pessoas que tomaram a primeira dose e que não tomaram a
segunda, o vetor retornado deverá ser [4, 5, 10, -1]. (2,0)
*/
int* tomara1_2nao(Vacinados* vetor, int tam){
    int tam2 = pessoas_1_sim_2_nao(vetor,tam) + 1;
    int *vetor2= (int*)malloc(tam2*sizeof(int));
    for(int i=0; i<tam2 ; i++){
        if(vetor[i].dose_1 == 1 && vetor[i].dose_2 == 2){
            vetor2[i]= vetor[i].codigo;
        }if(i == (tam2-1) ){
            vetor2[i]= -1;
        }
    }
    return vetor2;
}

int main(){
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf(" %d", &n);
    Vacinados *vetor =(Vacinados*) malloc(n*sizeof(Vacinados));
    for(int i=0; i<n;i++){
        printf("\nPosição[%d]", i+1);
        printf("\nDigite o código: ");
        scanf("%d", &vetor[i].codigo);
        printf("\nTomou a 1ª dose ? (1 - SIM, 2 - NÃO)\n");
        scanf("%d", &vetor[i].dose_1);
        printf("\nTomou a 2ª dose ? (1 - SIM, 2 - NÃO)\n");
        scanf("%d", &vetor[i].dose_2);
        printf("\nDigite sua idade: ");
        scanf("%d", &vetor[i].idade);
    }
    printf("\n\tVetor\n");
    for(int i=0; i<n;i++){
        printf("\nPosição[%d]", i+1);
        printf("\n.codigo : %d", vetor[i].codigo);
        if(vetor[i].dose_1 == 1){
            printf("\n.dose_1 : SIM");
        }else{
            printf("\n.dose_1 : NÃO");
        }
        if(vetor[i].dose_2 == 1){
            printf("\n.dose_2 : SIM");
        }else{
            printf("\n.dose_2 : NÃO");
        }
        printf("\n.dose_2 : %d",vetor[i].dose_2);
        printf("\n.idade : %d", vetor[i].idade);
        printf("\n");
    }
    printf("\nQuantidade de pessoaa 1ª-sim e 2ª-não = %d.\n", pessoas_1_sim_2_nao(vetor, n));
    printf("\nA media das pessoas que não se vacinaram = %.2f.\n", mediaNtomaramVacina(vetor, n));
    printf("\nvetor dos códigos : [");
    int tam3 = (pessoas_1_sim_2_nao(vetor,n) ) + 1;
    for(int j=0; j< tam3; j++){
        int *p = tomara1_2nao(vetor, n);
        printf("  %d", *(p + j));
    }
    printf("  ]\n");
    return 0;
}