#include <stdio.h>

void array(int a[], int dim)
{
    for(int i = 0; i < dim; i++){
        scanf("%d", &a[i]);
    }
}

int somma_pari(int a[], int dim)
{
    int somma = 0;
    for( int i = 0; i < dim; i++)
        {
            if(a[i] % 2 == 0){
                somma = somma + a[i];
            }
        }
    return somma;
}

void main()
{
    int n = 5;
    int a[5];
    array(a, n);
    int x = somma_pari(a, n);
    printf("la somma dei pari dell'array %d %d %d %d %d\nè %d\n", a[0], a[1], a[2], a[3], a[4], x);
}