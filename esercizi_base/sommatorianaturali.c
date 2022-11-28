#include <stdio.h>

//sommatoria primi n naturali
int sum_n(int n, int j)
{
    int sum = j;
    if (j==1){
        return sum = sum + 1;
     }
    //if(n==j)
       // return sum = sum +j;
    else
        return sum = sum + sum_n(n, j-1);
}

int main()
{
    int n = 4;
    int j = n;
    int somma = sum_n(n, j);
    printf("la somma dei primi %d numeri naturali è %d\n ", n, somma);
}