#include <stdio.h>

//funzione segno
void segno(int a, int b)
{
    if(a > 0 && b < 0){
        printf("%d è > 0 e %d è < 0\n", a, b);
    }
    if(a < 0 && b > 0){
        printf("%d è < 0 e %d è > 0\n", a, b);
    }
    if(a > 0 && b > 0){
        printf("%d e %d sono >0\n",a, b);
    }
    if(a < 0 && b < 0)
    { 
        printf("%d e %d sono < 0\n",a, b);
    }
}


//funzione pari o dispari
void pari(int a)
{
     if(a % 2 == 0){
         printf("%d è pari\n", a);
     } 
    else{
        printf("%d è dispari\n", a);
    }
}


//funzione massimo valore
int max_val(int a, int b)
{
    int somma;
    if(a < 0 && b > 0){
        somma = (-a) + b;
    }
    if(a > 0 && b < 0){
        somma = a + (-b);
    }
    if(a > 0 && b > 0){
        somma = a + b;
    }
    if(a < 0 && b < 0){
        somma = (-a) + (-b);
    }
    return somma;
}


//funzione main
void main()
{
    int a, b;
    printf("inserisci il valore di a\n");
    scanf("%d", &a);
    printf("inserisci il valore di b\n");
    scanf("%d", &b);
    segno(a, b);
    pari(a);
    pari(b);
    int x = max_val(a, b);
    printf("il massimo valore possibile della somma di %d e %d è %d\n", a, b, x);
}   
