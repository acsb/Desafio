#include <stdio.h>
#include <stdlib.h>

/*
Complexidade
Tempo: O(nˆ2)
Espaço: O(n)
*/

int main(){
    char *word1, *word2, *aux1, *aux2;
    int output = 1;
    int size = 50, i, count=0, j;

    word1 =(char*) malloc(size * sizeof(char));
    word2 =(char*) malloc(size * sizeof(char));
    aux1 =(char*) malloc(size * sizeof(char));
    aux2 =(char*) malloc(size * sizeof(char));

    printf("Digite a 1º palavra: ");
    scanf(" %s", word1);
    printf("Digite a 2º palavra: ");
    scanf(" %s", word2);

    if(word1[0]!= word2[0]){
        output = 0;
    }else{
        for(i=0;word1[i]!='\0';i++){
            if(word1[i] != word2[i]){
                aux1[count] = word1[i];
                aux2[count] = word2[i];
                count++; 
            }
        }
        
        if(word2[i] != '\0'){
            output = 0;
        }else{
            if(i > 3){
                if(count > ((i*2)/3)){
                    output = 0;
                }else{
                    for(i=0;i>=count;i++){
                        for(j=0;j>=count;j++){
                            if(aux1[i] == aux2[j]){
                                aux1[i] = '0';
                                aux1[j] = '0';
                            }
                        }
                    }
                }

                for(i=0;i>=count;i++){
                    if(aux1[i] != aux2[i]){
                        output = 0; 
                    }
                }

            }else{
                for(i=0;i>=count;i++){
                    for(j=0;j>=count;j++){
                        if(aux1[i] == aux2[j]){
                            aux1[i] = '0';
                            aux1[j] = '0';
                        }
                    }
                }

                for(i=0;i>=count;i++){
                    if(aux1[i] != aux2[i]){
                        output = 0; 
                    }
                }
            }
        }
    }


    if(output){
        printf("\nTrue\n\n");
    }else{
        printf("\nFalse\n\n");
    }

    free(word1);
    free(word2);
    free(aux1);
    free(aux2);

    return 0;
}