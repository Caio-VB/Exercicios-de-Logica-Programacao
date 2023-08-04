#include <stdio.h>
int main() {

    int N;
    scanf("%d", &N);

    int aux = 0;
    int n = 0;
    int i = 0;
    int resultado = 0;

    while (i < N){
        scanf("%d", &aux);
        if (aux >= n){
            n = aux;
        } else {
            resultado = 1;
        }
        i = i + 1;
    }
    
    if (resultado == 0){
        printf("SIM\n");
    } else {
        printf("NAO\n");
    }

    return 0;
}