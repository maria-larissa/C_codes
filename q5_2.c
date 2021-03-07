// Algoritmo para calcular o percentual de votos brancos, nulos e válidos.
#include <stdio.h>
#include <math.h>
int main()
{
    int x,y,z;
    float t;

    printf("Quantos votos validos?\n");
    scanf("%d", &x);                     // Lendo quantidade de votos válidos.
    printf("Quantos votos brancos?\n");
    scanf("%d", &y);                    //lendo quantidade de votos brancos.
    printf("Quantos votos nulos?\n");
    scanf("%d", &z);                    //Lendo quantidade de votos nulos.

    t = x + y + z;

	//Escreve o precentual  de cada tipo de voto na tela. 
    printf("O percentual de votos validos foi de: %f por cento.\n", (x/t)*100); 
    printf("O percentual de votos brancos foi de: %f por cento.\n", (y/t)*100);
    printf("O percentual de votos nulos foi de %f por cento.\n", (z/t)*100);

    return 0;
}
