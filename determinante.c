#include "determinante.h"
#include <stdio.h>

void remove_primeira_linha_e_coluna_c(int n, float m_entrada[n][n], float m_saida[n-1][n-1], int c) {
    int i;
    int j;
    int aux = 0;
    for (i = 0; i < n-1; i++){
        for (j = 0; j < n-1; j++){
            if(j == c){
                m_saida[i][j] = m_entrada[i+1][j+1];
                aux++;
            }else{
                m_saida[i][j] = m_entrada[i+1][j+aux];
            }
        }
        aux = 0;
    }
}

float potencia(float base, int expo) {
    int aux = base;
    while(expo > 1){
        base = base * aux;
        expo--;
    }
    return base;
}

float calcula_determinante(int n, float m_entrada[n][n]) {
    int c = 0;
    float determinante = 0;
    
    if(n == 1){
        determinante = m_entrada[0][0];
    }else{
        while(c < n){
            float m_saida[n-1][n-1];
            remove_primeira_linha_e_coluna_c(n, m_entrada, m_saida, c);
            determinante = determinante + m_entrada[0][c] * potencia(-1, (2+c)) * calcula_determinante(n-1, m_saida);
            c++;
        }
    }
    
    return determinante;
}

int main() {
    int i;
    int j;
    int n;
    scanf("%d", &n);
    
    float matriz[n][n];
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            scanf("%f", &matriz[i][j]);
        }
    }
    
    float determinante = calcula_determinante(n, matriz);
    printf("%.2f\n",  determinante);
    
    return 0;
}