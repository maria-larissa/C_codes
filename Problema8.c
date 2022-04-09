#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char palavra[30];
    printf("\nDigite uma palavra: ");
    scanf("%29[^\n]",&palavra);
    //como saber quantas letras tem a palavra
    int cont = strlen(palavra);

    if(cont%2 == 0){        //caso cont seja par
        for(int i=0; i<(cont/2); i++){
            if(palavra[i] == palavra[cont-1-i]){
                if(i == (cont/2)-1){
                    printf("\nA palavra '%s' é palindroma.\n", palavra);
                    break;
                }
                continue;
            }else{
                printf("\nA palavra '%s' não é palindroma.\n", palavra);
                break;
            }
        }
    }else{      //Caso cont seja ímpar
        for(int i=0 ; i< (cont+1)/2; i++){
            if(palavra[i] == palavra[cont-1-i]){
                if(i == ((cont+1)/2)-1){
                    printf("A palavra digitada '%s' é palindroma.\n", palavra);
                }
                continue;
            }else{
                printf("A palavra digitada '%s' não é palindroma.\n", palavra);
                break;
            }
        }
    }
    return 0;
}