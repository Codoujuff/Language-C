#include<stdio.h>
int main()
{
    int n;

    printf("Saisir un entier \n");
    scanf("%d",&n);

    if(n>0)
    {
        printf("Positif");
    }
    else
    {
        printf("Negatif");
    }

    return 0;
}
