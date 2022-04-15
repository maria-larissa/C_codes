#include <stdio.h>
#include <stdlib.h>

/*O código possui:
        ALAOCAÇÃO DINAMICA DE MATRIZ (n x n)
*/

int **criar_matriz(int tam);

int main(){
    int n;
    printf("\nDigite o tamanho da matriz: ");
    scanf("%d", &n);
        
    int **matriz_criada; //Matrizes são ponteiros de ponteiros, logo(**).
    printf("\nDigite os dados da matriz\n");
    matriz_criada = criar_matriz(n);

    printf("\n**Matriz**\n");    //printando primeira matriz
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%5d", matriz_criada[i][j]);
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
   
    //PREENCHENDO A MATRIZ 
    for(int i=0; i<tam ; i++){
        for(int j=0; j<tam ; j++){
            printf("Posição[%d][%d] = ", i,j);
            scanf("%d", &matriz[i][j]);
        }
    }
    return matriz;
}
