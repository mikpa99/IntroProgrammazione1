#include <stdio.h>

void array(int a[], int dim)
{
    printf("inserisci i %d valori dell'array\n", dim);
    for(int i = 0; i < dim; i++){
        scanf("%d", &a[i]);
    }
}

int check_diversi(int a[], int dim)
{
    int i = 0;
    while( i < dim-1){
        for( int j = i + 1; j < dim; j++){
            if(a[i] == a[j]){
            printf("gli indici uguali sono a[%d] e a[%d]\n", i, j);
            return 1;
            }
        }
        i++;
            
    }
    return 0;
}

void main()
{
    int n = 5;
    int a[5];
    array(a, n);
    int m = check_diversi(a, n);
    if(m == 0){
        printf("NON ci sono valori uguali\n");
    }
    
        
}