#include <stdio.h>

int main() {
    int i;
    int *p;

    i = 0;
    p = &i;
    printf("Afficher les dix premiers nombres entiers en n'incrémentant que i:\n");
    for (i = 0; i < 10; i++) {
        printf("%d\n", *p);
    }

    return 0;
}
