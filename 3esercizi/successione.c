#include <stdio.h>
//implemento funzione successione ennesima
double a_n(int n)
{ 
double a_i = 0.5;
printf(" il valore di a_1 è %lf\n", a_i);
    for(int i=2; i <=n; i++){
    a_i = (a_i + 1)/2;
    printf(" a_n con n = %d è %lf\n ",i,a_i);
}
return a_i;
}
// funzione main
int main()
{ 
int n;
printf("scrivi valore n: ");
scanf("%d", &n);
a_n(n);
return 0;
}
    