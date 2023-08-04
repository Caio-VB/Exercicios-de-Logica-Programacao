#include <stdio.h>

void remover_duplicados(int vetor[], int qtd){
    
    int i = 0;
    int j = 0;
    int k = 0;
    
    int aux = 0;
    
    int vetAux[qtd];
  
    for (i = 0; i < qtd; i++){
        vetAux[i] = -1;
    }
    
    for (i = 0; i < qtd; i++){
        for (j = i+1; j < qtd; j++){
          if (vetor[i] == vetor[j] && vetor[i] > 0){
            vetor[i] = -1;
          }
        }
    }

    for (i = 0; i < qtd; i++){
      if (vetor[i] != -1){
        vetAux[aux] = vetor[i];
        aux++;
      }
    }
    
    for (i = 0; i < qtd; i++){
        vetor[i] = vetAux[i];
    }
    

    for (i = 0; i < qtd; i++){
        printf("%d ", vetor[i]);
    }
    
}

int main() {
    
    int lista[7] = {11, 22, 22, 33, 44, 44, 55};
    
    remover_duplicados(lista, 7);
    
    return 0;
}