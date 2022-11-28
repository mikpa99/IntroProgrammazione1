#include <stdio.h>
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
void main()
{
    int x,y;
    printf("inserisci x e y\n");
    scanf("%d" &x);
    scanf("%d" &y);
}