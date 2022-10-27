#include<stdio.h>
int main()
{
    int n;

    printf("Saisir un entier \n");
    scanf("%d",&n);

    if(n%2!=0)
    {
        printf("Impair");
    }
    else
    {
        printf("Pair");
    }

    return 0;
}
