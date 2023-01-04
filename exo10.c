#include <stdio.h>

int DIVISE(int N) {
  int somme = 0;
  for (int i = 1; i <= N/2; i++) {
    if (N % i == 0) {
      somme += i;
    }
  }
  return somme;
}

int main(void) {
  int N;
  printf("Entrez un entier strictement positif: ");
  scanf("%d", &N);
  int somme = DIVISE(N);
  printf("La somme des diviseurs naturels de %d est %d.\n", N, somme);
  return 0;
}






