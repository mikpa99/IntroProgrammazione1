#include <stdio.h>
void main()
{
        int n;
        int i;
        printf("inserisci il valore di n\n");
        scanf("%d", &n);
        printf("tuo n è %d\n",n);
        printf("ora stamperò il quadrato di ogni numero fino a %d\n" , n);
        int sq;
        for(i = 1; i <= n; i++)
            {
            sq = i*i;
            printf("il quadrato di %d è %d\n",i,sq);
            }   
}
