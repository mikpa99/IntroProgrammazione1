    
#include <stdio.h>
//funzione minimo con 3 input
int funzione_min(int a, int b, int c)
{
int min;
if(a<= b)
{
    min = a;
}
else 
{
    min = b;  
}
if(min > c)
{
     min = c;  
}
return min;    
}
//funzione test
void test(int x, int y)
{
int max;
    if(x<= y)
{
    max = y;
}
    else
{
    max = x;
}
for(int i=1; i <= max; i++); 
    {
        printf("la tripletta è:(%d, %d, %d), e il minimo è %d\n", x, y, i, funzione_min(x,y,i));
    }
}
//funzione principale che richiama la funzione test
int main()
{
    int x,y;
    printf("inserisci valore di x\n");
    scanf("%d", &x);
    printf("inserisci valore di y\n");
    scanf("%d", &y);
    test(x,y);
    return 0;
    