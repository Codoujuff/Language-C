
#include <stdio.h>

int min(int T[], int n) {
  int i;
  int min = T[0]; // On initialise la valeur minimum à la première valeur du tableau

  for (i = 1; i < n; i++) { // On parcourt le reste du tableau
    if (T[i] < min) { // Si on trouve une valeur plus petite
      min = T[i]; // On met à jour la valeur minimum
    }
  }

  return min; // On retourne la valeur minimum
}

int main() {
  int T[] = {5, 2, 3, 1, 4};
  int n = 5; // Taille du tableau
  int resultat = min(T, n);

  printf("La valeur minimale du tableau est: %d\n", resultat);

  return 0;
}
