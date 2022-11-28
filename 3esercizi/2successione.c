#include <stdio.h>
// funzione successione
double a_n(int n, double p)
{
double a_i = p;
printf("a_1 = %lf\n", a_i);
    for(int i = 2; i <= n; i++){
        a_i = 0.5*(a_i + p/a_i);
        printf("il valore di a_%d è %lf\n", i,a_i);
    }
return a_i;
}
// funzione main
int main()
{ 
int n;
double p;
printf("scrivi valore n: ");
scanf("%d", &n);
printf("scrivi valore p: ");
scanf("%lf", &p);
a_n(n,p);
return 0;
}
    