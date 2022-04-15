// Algoritmo para calcular salário, com base na quantidade de horas trabalhadas e valor-hora.

#include <stdio.h>
int main()
{
    int x;
    float y;
    printf("Quantas horas trabalhadas no mes?\n");
    scanf("%d", &x);                            //lendo a quantidade de horas.
    printf("Quanto vale a hora?\n");
    scanf("%f", &y);                            //lendo o valor-hora.
    printf("Voce recebera: %f reais.\n", x*y);  //Calcula o valor do salário.
    return 0;
}
