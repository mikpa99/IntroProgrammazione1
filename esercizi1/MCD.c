#include <stdio.h>
void main()
{
    int x = 30;
    int y = 12;
    int MCD;
    while(x =! y)
        {
            if(y>x)
                y = y - x;
            else
                x = x - y;
        }
    MCD = x;
    printf("l'MCD è %d\n", MCD);
}
    