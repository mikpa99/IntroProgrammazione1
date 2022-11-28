#include <stdio.h>
#include <math.h>
// funzione serie
double s_n(int n)
{
    double a_k = 1;
    double s_k = a_k;
    printf("s_0 è %lf\n", s_k);
    for(int k = 1; k <=n; k++){
        a_k = 1/pow(2*k+1, 2);
        s_k = s_k + a_k;
        printf("il valore di a_%d è %lf e il valore di s_%d è %lf\n", k, a_k, k, s_k);
    }
return s_k;
}

int main()
{
int n;
printf("scegli il valore di n: ");
scanf("%d", &n);
s_n(n);
return 0;
}