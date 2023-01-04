#include <stdio.h>

int somme(int T[], int n) {
  int i;
  int somme = 0;

  for (i = 0; i < n; i++) {
    somme += T[i];
  }

  return somme;
}

int main() {
  int n;
  printf("Entrez la taille du tableau: ");
  scanf("%d", &n);

  int T[n];
  int i;
  for (i = 0; i < n; i++) {
    printf("Entrez la valeur de T[%d]: ", i);
    scanf("%d", &T[i]);
  }

  int resultat = somme(T, n);
  printf("La somme des éléments du tableau est: %d\n", resultat);

  return 0;
}
