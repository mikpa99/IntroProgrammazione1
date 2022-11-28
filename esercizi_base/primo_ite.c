#include <stdio.h>

//funxione primo ite
int primo_ite(int n){
for(int j = n-1; j > 1; j--) {
    // ora devo far vedere che se esiste j : 
    //n % j == 0 => n non è primo
    int y = n % j; 
    if(y == 0){
          printf(" %d non è primo\n", n);
          return 0;
      }
}
    return 1;
}

int main(void)
{
    int n;
    printf("inserisci valore di n: ");
    scanf("%d", &n);
    int x = primo_ite(n);
    if (x == 1)
        printf("%d è primo\n", n);
    return 0;
}


    
