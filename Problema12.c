#include <stdio.h>
/*
*   O algoritmo calcular o menor elemento da matriz e retorna qual a linha e a coluna a qual pertence.
*/
int main()
{
    int n = 0;
    printf("Qual é o tamanho da matriz?\n");
    int mat[n][n];
    scanf("%d", &n);
    int menor_elemento=0, linha_elem, colu_elem;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
             printf("Digite o elemento [%d][%d]: ", i, j);
             scanf("%d", &mat[i][j]);
            if(i == 0 && j == 0){
                menor_elemento = mat[i][j];
                linha_elem = i;
                colu_elem =j;
            }else if(mat[i][j]< menor_elemento){
                menor_elemento = mat[i][j];
                linha_elem = i;
                colu_elem =j;
            }
        }
    }
    printf("\nO menor elemento da matriz está na linha %d e coluna %d.\n", linha_elem, colu_elem);
    return 0;
}
