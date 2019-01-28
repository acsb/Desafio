#include <stdio.h>
#include <stdlib.h>

/*
Complexidade
Tempo: O(m*n)
Espaço: O(m*n)
*/

int main(){
    char *word1, *word2;
    char list[2][50] = {"pale","bake"};
    int outWord1 = 0, outWord2 = 0, noMatch1, noMatch2;
    int size = 50, i, j;

    word1 =(char*) malloc(size * sizeof(char));
    word2 =(char*) malloc(size * sizeof(char));


    printf("Digite a 1º palavra: ");
    scanf(" %s", word1);
    printf("Digite a 2º palavra: ");
    scanf(" %s", word2);

    for(i=0; i<2 ;i++){
        noMatch1 = 0;
        noMatch2 = 0;
        for(j=0;list[i][j] !='\0';j++){
            if(word1[j] != list[i][j]){
                noMatch1 = 1;
            }
            if(word2[j] != list[i][j]){
                noMatch2 = 1;
            }
        }
        
        if(noMatch1 == 0 && word1[j] == '\0'){
           outWord1 = 1; 
        }
        if(noMatch2 == 0 && word2[j] == '\0'){
           outWord2 = 1; 
        }
    }
    
    if(outWord1 && outWord2){
        printf("\nFalse\n\n");
    }else{
        printf("\nTrue\n\n");
    }

    free(word1);
    free(word2);

    return 0;
}