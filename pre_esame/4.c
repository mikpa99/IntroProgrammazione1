#include <stdio.h>
#include <math.h>

double distanza(int x1, int y1, int x2, int y2)
{
    double dist;
    double m1 = x1 - x2;
    double m2 = y1 - y2;
    double m3 = pow(m1, 2) + pow(m2, 2);
    printf("m3 = %lf\n", m3);
    dist = sqrt(m3);
    return dist;
}

void main()
{
    double x1, x2, y1, y2;
    printf("inserisci i valori (x1,y1)\n");
    scanf("%lf", &x1);
    scanf("%lf", &y1);
    printf("inserisci i valori (x2,y2)\n");
    scanf("%lf", &x2);
    scanf("%lf", &y2);
    double d = distanza(x1, y1, x2, y2);
    printf("la distanza è: %lf\n", d);
    
}