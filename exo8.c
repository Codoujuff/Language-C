#include <stdio.h>

int sommeDiviseursStricts(int n) {
  int somme = 0;
  for (int i = 1; i < n; i++) {
    if (n % i == 0) {
      somme += i;
    }
  }
  return somme;
}

int sontAmis(int a, int b) {
  return sommeDiviseursStricts(a) == b && sommeDiviseursStricts(b) == a;
}

int main(void) {
  int a, b;
  printf("Entrez deux entiers strictement positifs: ");
  scanf("%d%d", &a, &b);
  if (sontAmis(a, b)) {
    printf("%d et %d sont amis.\n", a, b);
  } else {
    printf("%d et %d ne sont pas amis.\n", a, b);
  }
  return 0;
}

