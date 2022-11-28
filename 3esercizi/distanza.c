#include <stdio.h>
#include <math.h>

//costuzione funzione distanza
double f_distanza(double x1, double y1, double x2, double y2)
{
    double diff1, diff2, sum;
    diff1 = x1 - x2;
    diff2 = y1 - y2;
    diff1 = diff1 * diff1;
    diff2 = diff2 * diff2;
    sum = diff1 + diff2;
    double dist = sqrt(sum);
        
    return dist;
}


//funzione principale
void main()
{
    double x1, x2, y1, y2;
    printf("inserisci i valori di (x1,y1)\n");
    scanf("%lf", &x1);
    scanf("%lf", &y1);
    printf("inserisci i valori di (x2,y2)\n");
    scanf("%lf", &x2);
    scanf("%lf", &y2);

    double distanza = f_distanza(x1,y2,x2, y2);
    printf("la distanza è %lf\n", distanza);
}
