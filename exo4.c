#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *T;

    printf("Entrez la taille du tableau: ");
    scanf("%d", &n);

    T = (int*) malloc(n * sizeof(int));

    for (i = 0; i < n; i++) {
        *(T + i) = i;
    }

    printf("Le tableau contient les %d valeurs suivantes:", n);
    for (i = 0; i < n; i++) {
        printf(" %d", *(T + i));
    }
    printf("\n");

    free(T);

    return 0;
}

