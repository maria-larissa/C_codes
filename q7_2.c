//Algoritmo para calcular salario bruto, com base no valor pago de imposotos e sindicato.
#include <stdio.h>
int main()
{
    float x, y, z, w;
    printf("Qual o valor do seu salario?\n");
    scanf("%f", &x);
	
	//calcula o valor pago em impostos. O valor do imposto � 8% do total do sal�rio.
    y = 0.08*x;      
    printf("voce pagou de imposto:%f reais.\n", y);
    
    //Calcula o valor pago em sindicato. O valor do sindicato � 5% do tatal do sal�rio.
    z = 0.05*x;      
    printf("voce pagou de sindicato:%f reais.\n", z);
   
    //Calcula o valor do sal�rio bruto.
    w = x - (y + z);
    printf("O seu salario liquido foi de:%f reais.\n", w);

    return 0;
}
