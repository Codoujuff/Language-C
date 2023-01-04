#include <stdio.h>

int main() {
    int T[100];
    int N, i;

    printf("Entrez le nombre de nombres impairs a placer dans le tableau: ");
    scanf("%d", &N);

    // Placer les N premiers nombres impairs dans le tableau
    for (i = 0; i < N; i++) {
        *(T + i) = 2 * i + 1; // Placer le i-ème nombre impair dans le tableau
    }

    printf("Le tableau contient les %d premiers nombres impairs suivants:", N);
    for (i = 0; i < N; i++) {
        printf(" %d", *(T + i));
    }
    printf("\n");

    return 0;
}





