#include <stdio.h>
int main() {
    
    char frase[100];
    int i = 0; 
    int aux = 0; 
    int soma = 0;
    
    fgets(frase, 100, stdin); 
    
    for(i = 0; frase[i] != '\0'; i++) {
    	if(!aux && frase[i]!=' '){
    		aux = 1;
    		soma = soma + 1;
    	}else if(aux && frase[i]==' '){
    	    aux = 0;
    	}
    }
    
    printf("%d\n", soma);
    
    return 0;
}