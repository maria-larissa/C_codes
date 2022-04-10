/*  
*   É a forma mais eficiente de calcular um fatorila, pois não exige muito da memória.
*   Calcula o fatorial sem usar RECURSIVIDADE.
*   
*       DEFINIÇÃO DE FATORIAL   
*   n! = n * (n-1) * (n-2) * ... * 2 * 1
*/

#include "stdio.h"

int fat(int n){
    if(n == 0 || n ==1){        //Caso n seja um dos casos bases.
        return 1;
    }
    int resultado = n, i = n;
    while( i > 1){              //Caso contrário, vai calculando cada parcela do produtório e já armazenando o resultado em um variável.
        i--;
        resultado *= i;
    }
    return resultado;
}
int main(){
    int n;
    printf("Digite um inteiro: ");
    scanf("%d", &n);
    printf("O fatorial do número %d é %d.\n",n ,fat(n));
    return 0;
}
