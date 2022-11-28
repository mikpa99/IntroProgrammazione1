#include <stdio.h>
void main()
{
    int x,y;
    int potenza = x;
    int i= 1;
    printf("inserisci n_1\n");
    scanf("%d", &x);
    printf("inserisci n_2, con n_2 > 0 \n");
    scanf("%d", &y);
    printf("ora calcolerò n_1^n_2\n");
    while(i <= y)        
        {
            potenza = potenza *x;
            printf("il risultato è %d\n", potenza);
        }
    
    
    
}