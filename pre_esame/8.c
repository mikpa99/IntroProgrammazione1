#include <stdio.h>
#include <math.h>

float s_n(int n)
{
    float somma = 0;
    for( int k = 0; k <= n; k++)
    {
        float a_k = 1/pow((2 * k + 1), 2);
        somma = somma + a_k;
        printf("a_%d = %f\nsomma = %f\n", k, a_k, somma);
    }
    return somma;
}

void main()
{
    int n;
    printf("inserisci n\n");
    scanf("%d", &n);
    s_n(n);
}
    
    