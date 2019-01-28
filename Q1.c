#include <stdio.h>
#include <stdlib.h>

/*
Complexidade
Tempo: O(n)
Espaço: O(n)
*/

int main(){
    char *frase;
    int tam, i, j, cont = 0;

    printf("Digite o comprimento do array: ");
    scanf("%d", &tam);

    frase =(char*) malloc(tam * sizeof(char));

    printf("Digite o array: ");
    scanf(" %[^\n]s", frase);


    for(i = 0; i < tam; i++){
        if(frase[i] == ' '){
            cont++;
        }
    }
    cont = cont*2;

    frase = (char*) realloc(frase, (tam+cont)*sizeof(char));

    j = (tam-1);
    for( i=(tam + cont - 1) ; i>=0 ; i-- ){
        if(j>=0){
            if(frase[j] != ' '){
                frase[i] = frase[j];

            }else{
                frase[i] = '2';
                frase[i-1] = '3';
                frase[i-2] = '&';
                i = i - 2;
            }
        }
        j--;
    }

    for(i=0;i<(tam+cont);i++){
        printf("%c", frase[i]);
    }
    printf("\n");

    free(frase);
    
    return 0;
}