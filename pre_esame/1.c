#include <stdio.h>
#include <math.h>

//funzione iterativa

int ite(int n,int k)
{
    int tmp = 0;
    for(int i = 1; i <= n; i++){
        tmp += pow(k, i);
        printf("%d\n", tmp);
    }
    return tmp;
}


//main


void main()
{
    int n, k;
    printf("inserisci il valore di n\n");
    scanf("%d", &n);
    printf("inserisci il valore di k\n");
    scanf("%d", &k);
    ite(n, k);
}