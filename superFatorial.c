#include <stdio.h>

int superfatorial(int n) {
    
    int aux = n-1;
    int fatorial = 1;
    
    if(n == 1) {
        return 1;
    }
    
    while (n > 0) {
        fatorial = n * fatorial;
        n--;
    }

    return fatorial * superfatorial(aux);
}



int main() {
    printf("%d", superfatorial(4));
    return 0;
}