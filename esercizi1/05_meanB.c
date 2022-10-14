#include <stdio.h>

void main() 
{
    int x = -1;
    float somma = 0;
    int n = 0;

    while (x != 0) 
    {
        printf("Inserire il valore di x: ");
        scanf("%d", &x);
        somma = somma + x;
        if (x != 0)
            n = n + 1; 
    }

    printf("La media dei numeri inseriti è: %f\n", somma / n);
}