#include <stdio.h>

int main()
{
    int n;
    printf("Saisissez un entier n : ");
    scanf("%d", &n);

    // Crée la matrice T de dimensions n x n
    int T[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i==j)
            {
                T[i][j]=1;
            }
            else
            {
                T[i][j]=0;
            }
        }
    }

    printf("La matrice T est :\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", T[i][j]);
        }
        printf("\n");
    }

    return 0;
}
