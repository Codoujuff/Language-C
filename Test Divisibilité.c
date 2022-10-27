#include<stdio.h>
int main()
{
    int n;

    printf("Saisir un nombre \n");
    scanf("%d",&n);

    if((n%3)!=0)
    {
         printf("Le nombre n'est pas divisible par 3");
    }
    else
    {
         printf("Le nombre est divisible par 3");
    }

    return 0;
}
