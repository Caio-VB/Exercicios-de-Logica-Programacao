#include "vetor.h"
#include <math.h>

void estatisticas_vetor(int vetor[], int n, int *min, int *max, int *soma, double *media, double *desvio){
    int i;
    *soma = 0;
    double div = n;
    for(i = 0; i < n; i++){
        if(i == 0 || *min > vetor[i]){*min = vetor[i];}
        if(i == 0 || *max < vetor[i]){*max = vetor[i];}
        *soma += vetor[i];
    }
    *media = *soma/div;
    *desvio = 0;
    for(i = 0; i < n; i++){
        *desvio += (vetor[i] - *media)*(vetor[i] - *media);
    }
    *desvio = *desvio/div;
    *desvio = sqrt(*desvio);
}