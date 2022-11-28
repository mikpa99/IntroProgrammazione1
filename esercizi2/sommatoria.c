#include <stdio.h>
void main()
{
    int x,n;
    int somma = 0;
    int tmp = x; //variabile di supporto
    
    printf("inserisci un numer intero\n");
    scanf("%d",&x);
    printf("scegli n\n");
    scanf("%d", &n);
    for(int i = 1;i <= n; i++)
        {
        tmp = somma * x;
        somma = somma + tmp;
        }
    printf("il risultato è %d\n", somma);
}