/*  
*    É a forma mais eficiente de calcular um fatorila, pois não exige muito da memória.
*    Calcula o fatorial sem usar RECURSIVIDADE.
*/

#include "stdio.h"

int fat(int n){
    if(n == 0 || n ==1){
        return 1;
    }
    //
    //
    int resultado = n, i = n;
    while( i > 1){
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