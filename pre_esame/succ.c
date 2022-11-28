#include <stdio.h>

int ricorsiva(int j)
{
    int sm = 0;
    if(j == 1){
        return 1 ;
    }
    else {
        sm = j + ricorsiva(j-1);
        
    }
    return sm;
}

int ite(int a, int b)
{
    int x = 0;
    for(int i = a; i<=a; i++){
        x = x + ricorsiva(i);
    }
    return x;
}

int main()
{
int j;
int b = 5;
printf("inserisci il valore di j:");
scanf("%d", &j);
int somma = ricorsiva(j);
printf("il valore è %d\n", somma);
printf(" secondo calcolo: ");
int somma2 = ite(j,b);
printf("%d\n", somma2);
    
}
