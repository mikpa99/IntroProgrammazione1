#include <stdio.h>
#include <math.h>

int sgn(int x)
{
    if(x > 0){
        printf("il numero %d è positivo\ne il suo valore assoluto è %d\n ", x, x);
    }
    else{
        printf("il numero %d è negativo e il suo valore assoluto è %d\n", x, -x);
    }
    return x;

}


int sommatoria(int n, int k)
{
     int somma = 0;
     for(int i = 1; i <= n; i++){
         somma = somma + pow(k, i);
     } 
    printf("la sommatoria è uguale a %d\n", somma);
    return 1;
}


int fibo_ite(int n)
{
    int f0 = 0;
    int f1 = 1;
    int fi;
    int fi1 = f1;
    int fi2 = f0;
    for(int i = 2; i <= n; i++){
        fi = fi1 + fi2;
        fi1 = fi;
        fi2 = fi1;    
        printf("%d\n", i, fi);
    }
    return 0;
}

int fibo_ric(int n)
{
    int fi;
    if (n == 1)
        return 1;
    if (n == 0)
        return 0;
    else{
        fi = fibo_ric(n-1) + fibo_ric(n-2);
    }
        
}




int main()
{
    int x;
    printf("inserisci il valore di x: ");
    scanf("%d", &x);
    sgn(x);
    int n,k;
    printf("inserisci il valore di n: ");
    scanf("%d", &n);
    printf("inserisci il valore di k: ");
    scanf("%d", &k);
    sommatoria(n, k);
    fibo_ite(n);
    
}

