#include <stdio.h>
 float a_n(int n)
{
    float a0 = 0.5;
    for(int i = 2; i <= n; i++)
        {
            float a_i = (a0 + 1)/2;
            printf("il valore di a_%d è %f\n", i, a_i);
            a0 = a_i;
        }
    return 1;
}

void main()
{
    int n;
    printf("inserisci n\n");
    scanf("%d", &n);
    a_n(n);
}