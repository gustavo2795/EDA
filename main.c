#include <stdio.h>
#include <stdlib.h>
#include "header.h"


 int main(){
    int tamanho, *vetor, i;
    float *vetor2;
    printf("Digite o tamanho do vetor:\n");
    scanf("%d", &tamanho);

    vetor = CriaVetInt(tamanho);
    vetor2 = CriaVetFloat(tamanho);

    for(i=0;i<tamanho;i++){
        vetor[i]=i;
        vetor2[i]= 2.0 + i;
    }

    for(i=0;i<tamanho;i++){
    printf("O valor no indice %d eh: %d\n",i, vetor[i]);
    printf("O valor no indice %d eh: %.2f\n",i, vetor2[i]);
    }


    free(vetor);
    free(vetor2);

    return 0;
 }

