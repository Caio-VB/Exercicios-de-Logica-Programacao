#include <stdio.h>int multiplicacao_russa( int a, int b){
    if(a != 0 && a%2 != 0){
        a = a-1;
		return b + multiplicacao_russa(a/2, b*2);
	}else if(a != 0){	
	    return multiplicacao_russa(a/2, b*2);
	}
    return 0;
}

int main() {
    int a = 0;
    int b = 2;
    
    printf("%d\n",  multiplicacao_comum(a, b));
    printf("%d\n",  multiplicacao_russa(a, b));
    
    return 0;
}