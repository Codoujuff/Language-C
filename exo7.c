#include <stdio.h>

#define MAX_TAILLE 100

void saisir_tableau(int tab[], int *taille) {
  printf("Entrez le nombre d'éléments du tableau: ");
  scanf("%d", taille);

  for (int i = 0; i < *taille; i++) {
    printf("Entrez l'élément %d: ", i+1);
    scanf("%d", &tab[i]);
  }
}

void inverser_tableau(int tab[], int taille) {
  int temp;
  for (int i = 0; i < taille/2; i++) {
    temp = tab[i];
    tab[i] = tab[taille-1-i];
    tab[taille-1-i] = temp;
  }
}

void afficher_tableau(int tab[], int taille) {
  for (int i = 0; i < taille; i++) {
    printf("%d ", tab[i]);
  }
  printf("\n");
}

int main(void) {
  int tab[MAX_TAILLE];
  int taille;

  saisir_tableau(tab, &taille);
  inverser_tableau(tab, taille);
  afficher_tableau(tab, taille);

  return 0;
}

