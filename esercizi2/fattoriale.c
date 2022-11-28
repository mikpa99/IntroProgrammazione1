#include <stdio.h>
void main()
{
    int n;
    int tmp=1;
    printf("inserisci n\n");
    scanf("%d", &n);
    for(int i = 1;i <= n; i++)
        {
        tmp = tmp*i;
        //printf("%d\n", tmp);
        //printf("%d\n", i);
        }    
    printf("il fattoriale di %d è %d\n", n,tmp);
}