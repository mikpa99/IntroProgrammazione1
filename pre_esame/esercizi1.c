#include <stdio.h>

//funzione quadrati perfetti
int quadrati_perfetti(int n)
{
    int tmp;
    for(int i = 1; i <= n; i++){
        tmp = i*i;
        printf("il quadrato di %d è %d\n", i, tmp);
    }
    return 1;
}

//funzione mcd
int mcd(int x, int y)
{
    while(x != y){
        if(x < y){
            y = y - x;
        }
        else{
            x = x - y;
        }
    
    }
    printf("l'mcd è %d\n", x);
    return x;
}

//contadino russo 
//* int russo(float n1, float n2)
//{
    //int tmp = 0;
    //while( n1 / n2 != 1){
       // n1 = n1 / 2;
      //  n2 = n2 * 2;
    //    if(n1 % 2 != 0){
        //    tmp = tmp + n2;
      //  }
    //}
  //  printf("il prodotto di %d * %d è %d", n1, //n2, tmp);
 //   return tmp;
//}



//funzione main
int main()
{
   int n;
    printf("inserisci il valore di n: ");
    scanf("%d", &n);
    quadrati_perfetti(n);
    int x,y;
    printf("inserisci il valore di x: ");
    scanf("%d", &x);
    printf("inserisci il valore di y: ");
    scanf("%d", &y);
    mcd(x, y);
    int n1, n2;
    printf("inserisci i valori di n1 e n2:\n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    //russo(n1, n2);

    int z;
    float somma = 0;
    for (int i = 1; i <= n; i++){
        printf("inserisciil valore di x%d: ", i);
        scanf("%d", &z);
        somma = somma + z;
    }
    somma = somma / n;
    printf("la media è: %f\n", somma); 
    
}
