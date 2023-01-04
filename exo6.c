#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char *S;
  int len;

  printf("Saisissez une chaîne de caractères : ");

  S = malloc(sizeof(char));

  len = 0;
  char c = getchar();
  while (c != '\n') {
    S = realloc(S, (len + 1) * sizeof(char));

    S[len] = c;
    len++;
    c = getchar();
  }

  printf("La chaine S est : %s\n", S);

  free(S);

  return 0;
}

