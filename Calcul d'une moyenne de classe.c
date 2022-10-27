#include <stdio.h>
int main()
{
    int N = 0;
    float S, M, n;

    printf("Saisir une note: \n");
    scanf("%f",&n);

    while (n >= 0)
    {
        N += 1;
        S += n;
        printf("Note suivante :\n");
        scanf("%f",&n);

         if(n > 20)
    {
        printf("Saisir une note correcte \n");
    }

    }
    if (N < 1000)
    {
        M=S/N;
        printf("moyenne de ces %d notes : %f", N, M);
    }
    else
    {
        printf("Vous avez atteind la limite");
    }

    return 0;
}
