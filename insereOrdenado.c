#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int x = 0;
    scanf("%d", &x);
    double *lista;
    lista = malloc(x * sizeof(double));

    int i = 0;
    int j = 0;
    int k = 0;
    double aux = -1;
    double num = -1;
    
    for (i = 0; i < x; i++){
        lista[i] = -1;
    }
    
    for (i = 0; i < x; i++){
        
        scanf("%lf", &num);
        
        if(num == -1){
            break;
        }else{
            
            lista[i] = num;
            
            if(i != 0){
                for(int j = 0; j < x; j++){
                
                    if(lista[i] < lista[j]){
                        aux = lista[i];
                        lista[i] = lista[j];
                        lista[j] = aux;
                    }
                }
            }
            
            for (j = 0; j < x; j++){
                if(lista[j] != -1){
                    printf("%.1lf ", lista[j]);
                }
            }
            
            printf("\n");
        }
    }
    
    free(lista);
    
    return 0;
}