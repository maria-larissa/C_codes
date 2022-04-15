#include <stdio.h>
#include <stdlib.h>

/*O código possui:
        ALAOCAÇÃO DINAMICA DE MATRIZES (n x n)
        FUNÇÕES CRIAR E MULTIPLICAR MATRIZES (n x n)
*/

int **criar_matriz(int tam);
int **multiplicar_matrizes(int tam, int **matriz1, int **matriz2);

int main(){
    int n;
    int **matriz_criada3, **matriz_criada4, **matriz_multi; //Matrizes são ponteiros de ponteiros, logo(**).

    printf("\nDigite os dados da 1ª matriz\n");
    matriz_criada3 = criar_matriz(n);

    printf("\nDigite os dados da 2ª matriz\n");
    matriz_criada4 = criar_matriz(n);

    printf("\n**1ª matriz**\n");    //printando primeira matriz
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%5d", matriz_criada3[i][j]);
        }
        printf("\n");
    }

    printf("\n**2ª Matriz**\n");    //printando segunda matriz
    for(int i=0; i<n; i++){
        for(int j=0; j<n;j++){
            printf("%5d", matriz_criada4[i][j]);
        }
        printf("\n");
    }

    matriz_multi = multiplicar_matrizes(n, matriz_criada3,matriz_criada4);  //usando função multiplicar


    printf("\n**Matriz Multiplicação**\n"); //printando matriz resultado
    for(int i=0; i<n; i++){
        for(int j=0; j<n;j++){
            printf("%5d", matriz_multi[i][j]);
        }
        printf("\n");
    }
    return 0;
}
//Função criar matrizes (n x n)
int **criar_matriz(int tam){
    //ALOCAÇÃO DINÂMICA DE MATRIZES
    int **matriz = (int**)malloc(tam * sizeof(int*));       //alocando as linhas (ponteiros de ponteiros) 
    for(int k=0; k<tam; k++){
        matriz[k] = (int*)malloc(tam * sizeof(int));        //alocandoa as colunas (ponteiros) 
    }
    //

    //PREENCHENDO A MATRIZ 
    for(int i=0; i<tam ; i++){
        for(int j=0; j<tam ; j++){
            printf("Posição[%d][%d] = ", i,j);
            scanf("%d", &matriz[i][j]);
        }
    }
    //
    return matriz;
}

//Função multiplicar matrizes (n x n)
int **multiplicar_matrizes(int tam, int **matriz1, int **matriz2){
    int soma=0;

    //ALOCAÇÃO DINÂMICA DE MATRIZES
    int **resultado = (int**)malloc(tam * sizeof(int*));        //alocando as linhas (ponteiros de ponteiros) 
    for(int k=0; k<tam; k++){
        resultado[k] = (int*)malloc(tam * sizeof(int));        //alocando as colunas (ponteiros) 
    }
    //

    //MULTIPLICANDO AS MATRIZES
    int aux=0;
    for(int i = 0; i < tam; i++) {
        for(int j = 0; j < tam; j++) {
            for(int k = 0; k < tam; k++) {
                aux +=  matriz1[i][k] * matriz2[k][j];
            }
            resultado[i][j] = aux;
            aux = 0;
        }
    }
    return resultado;
}
