#include <stdio.h>

//coefficiente binomiale
int coef_bin(int n, int k)
{
    int bin = fact(n)/(fact(n-k)*fact(k));
    return bin;
}

// funzione fattoriale
int fact(int n)
{
    int fatto = 1;
    if(n == 1){
        return 1;
    }
        return fatto = n * fact(n-1);
        
            
}

// funzione main
void main(){
int n, k;
printf("inserisci valori di n e k\n");
scanf("%d", &n);
scanf("%d", &k);
printf("ora calcolo il coefficiente binomiale n su k\n");
int d = coef_bin(n, k);
printf("il coeff. bin di %d su %d è %d\n", n, k, d);
}