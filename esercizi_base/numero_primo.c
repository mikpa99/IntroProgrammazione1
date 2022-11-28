#include <stdio.h>

//implemento funzione primo ricorsiva
int primo(int n, int j)
{
    if(j == 1){
        return 1;
    }
    if(n % j == 0){
        return 0;
    }
    else{
        return primo(n, j-1);
    }
}



int main()
{
    int n = 8;
    int j = n-1;
    int x = primo(n, j);
    if (x == 1)
        printf("%d è un numero primo\n", n);
    if(x == 0)
        printf("%d NON è un numero primo", n);
    
    return 0;



}