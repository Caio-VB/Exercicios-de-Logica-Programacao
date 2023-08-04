#include<stdio.h>
int main () 
{
    int a,b,n,cont;
    int soma = 0;
    int divisores = 0;

    scanf("%i", &a);
    scanf("%i", &b);
    
    if (a > b)
        for (cont = b; cont <= a; cont++){
            divisores = 0;
            for(n = 1; n <= cont; n++){
                if(cont % n == 0)
                    divisores++;
            }
            if(divisores == 2)
                soma = soma + 1;
        }
    else
        for (cont = a; cont <= b; cont++){
            divisores = 0;
            for(n = 1; n <= cont; n++){
                if(cont % n == 0)
                    divisores++;
            }
            if(divisores == 2)
                soma = soma + 1;
        }
    printf("%d\n", soma);
    return 0;
}