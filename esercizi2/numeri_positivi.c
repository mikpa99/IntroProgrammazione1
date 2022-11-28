#include <stdio.h>
void main()
{
float x;
printf("inserisci un numero\n");
scanf("%f", &x );
if(x>=0)
{
    printf("il numero %f è positivo\n", x);
    printf("il valore assoluto di è %f\n", x);
}
else
{
    printf("il numero %f è negativo\n", x);
    x = -x;
    printf("il valore assoluto di è %f\n", x);           
}
}
