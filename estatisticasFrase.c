#include "frase.h"
#include <math.h>

void estatisticas_frase(char frase[], int *min, int *max, int *soma, double *media, double *desvio) {
    
    /*Calculando tamanho para vetorContaChar*/
    int i;
    int contaPalavra = 1;
    int aux = 1; 
    
    for(i = 0; frase[i-2] != '\0'; i++) {
    	if(!aux){
    	    if(frase[i]!=' ' && frase[i]!=',' && frase[i]!='.' && frase[i]!='!' && frase[i]!='?' && frase[i]!=':'){
        		aux = 1;
                contaPalavra++;
    	    }
    	}else if(aux){
    	    if(frase[i]==' ' || frase[i]==',' || frase[i]=='.' || frase[i]=='!' || frase[i]=='?' || frase[i]==':' || frase[i]=='\0'){
    	        aux = 0;
    	    }
    	}
    }
    
    /*Calculando min, max e soma*/
    int vetorContaChar[contaPalavra];
    int contaChar = 0;
    contaPalavra = 1;
    aux = 1;
    *soma = 0;
    
    for(i = 0; frase[i-2] != '\0'; i++) {
    	if(!aux){
    	    if(frase[i]!=' ' && frase[i]!=',' && frase[i]!='.' && frase[i]!='!' && frase[i]!='?' && frase[i]!=':'){
        		aux = 1;
        		if(contaPalavra == 1 || *min > contaChar){
                    *min = contaChar;
                }
                if(contaPalavra == 1 || *max < contaChar){
                    *max = contaChar;
                }
                vetorContaChar[contaPalavra] = contaChar;
                contaPalavra++;
        		contaChar = 0;
    	    }
    	}else if(aux){
    	    if(frase[i]==' ' || frase[i]==',' || frase[i]=='.' || frase[i]=='!' || frase[i]=='?' || frase[i]==':' || frase[i]=='\0'){
    	        aux = 0;
    	    }
    	}
    	if(frase[i]!=' ' && frase[i]!=',' && frase[i]!='.' && frase[i]!='!' && frase[i]!='?' && frase[i]!=':' && frase[i]!='\0' && frase[i-1]!='\0' && frase[i-2]!='\0'){
    	    contaChar++;
    	    *soma += 1;
    	}
    }
    
    /*Calculando a média*/
    double contaPalavraAux = contaPalavra;
    *media = *soma/(contaPalavraAux-1);
    
    /*Calculando o desvio*/
    *desvio = 0;
    aux = 0;
    contaChar = 0;
    for(i = 1; i < contaPalavra; i++) {
        *desvio += (vetorContaChar[i] - *media)*(vetorContaChar[i] - *media);
    }
    *desvio = *desvio/(contaPalavraAux-1);
    *desvio = sqrt(*desvio);
} 