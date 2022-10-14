#include <stdio.h>

/*
    Stampare i quadrati perfetti da 1 a n.
*/

void main() 
{
    // dichiariamo la variabile n
    // numero di elementi da considerare
    int n;
    printf("Inserire il valore di n: ");
    scanf("%d", &n);

    printf("Ti stamperò i quadrati perfetti fino a %d\n", n);

    int sq;
    for (int i = 1; i <= n; i++) 
    {
        sq = i*i;
        printf("Il quadrato di %d è %d\n", i, sq);
        // printf("Il quadrato di %d è %d\n", i, i*i);
    }

    for (int i = n; i >= 1; i--)
    {
        sq = i*i;
        printf("Il quadrato di %d è %d\n", i, sq);
    }

    int p = 1;
    while (p <= n) 
    {
        printf("Il quadrato di %d è %d\n", p, p*p);
        p = p + 1;
    }

    while (n > 0) 
    {
        printf("Il quadrato di %d è %d\n", n, n*n);
        n = n - 1;
    }
    
}