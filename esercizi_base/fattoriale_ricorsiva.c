#include <stdio.h>
//funzione fattoriale ricorsiva 
int fattoriale(int n)
{
    int y;
    if (n==0){
        return 1;
    }
    if (n==1){
        return 1;
    }
    else{
    y = n * fattoriale(n-1);
    printf("%d\n", y);
    } 
    return y;
}
    
int main()
{
    int n = 4;
    int x = fattoriale(n);
    printf(" il fattoriale di %d è %d\n", n, x);
}