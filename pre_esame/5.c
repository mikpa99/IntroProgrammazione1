#include <stdio.h>

//funzione numero primo
int prime_ite(int n)
{
     for(int i = n-1; i > 1; i--)
         if( n % i == 0){
             return 0;
         }
         return 1;
}

//int prime_ric(int n, int j)
//{
//    int j = n-1
//    int x = n % 
//    if( j == 1){
//        return 1;
//    }
//    return prime_ric(int)
//}


int main()
{
    int n;
    printf("dimmi n\n");
    scanf("%d", &n);
    int x = prime_ite(n);
    if(x == 1){
        printf(" %d è primo\n", n);
    }
    else{
        printf("%d non è primo\n", n);
    }
    for(int i = 1; i <= 100; i++)
        {
            int x = prime_ite(i);
            if(x == 1){
        printf("%d\n", i);
            }
        }
    return 0;
}