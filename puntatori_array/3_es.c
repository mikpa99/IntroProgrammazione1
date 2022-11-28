#include <stdio.h>

void array(int a[], int dim)
{
    printf("inserisci i %d valori dell'array\n", dim);
    for(int i = 0; i < dim; i++){
        scanf("%d", &a[i]);
    }
}

int min(int a, int b)
{
    if(a <= b){
        return a;
    }
    return b;
}

int prod_scal(int a[], int n, int b[], int m)
{
    int somma = 0;
    for( int i = 0; i < min(n, m); i++)
        {
           somma = somma + a[i]*b[i];
            printf("procedimento %d\n", somma);
        }
    return somma;
}

void main()
{
    int n = 5;
    int a[5];
    array(a, n);
    int m = 5;
    int b[5];
    array(b, m);
    int ris = prod_scal(a, n, b, m);
    printf("la somma è %d\n", ris);
    
}