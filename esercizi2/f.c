#include<stdio.h>

int main() {
  int n, k; // Chiediamo `n` e `k` all'utente
  printf("Inserire n: ");
  scanf("%d", &n);
  printf("Inserire k: ");
  scanf("%d", &k);
  int somma = 0; // Variabile che conterrà il risultato
  int tmp = k; // Variabile ausiliaria

  for(int i = 1; i <= n; i++) { // Ciclo sugli elementi della sommatoria
    somma += tmp; // Aggiungo `k ^ i` alla somma
      // è equivalente a somma=somma+tmp
    printf("somma è %d\n", somma += tmp);
    tmp = tmp * k; // Calcolo `k ^ (i + 1)`
    printf("tmp è %d\n", tmp);  
  }

  printf("Risultato sommatoria: %d\n", somma);
  return 0;}
    