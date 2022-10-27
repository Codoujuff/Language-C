#include<stdio.h>
int main()
{
    int n;

    printf("Saisir un entier compris entre 10 et 20 \n");
    scanf("%d",&n);

    while((n<10)||(n>20))
    {
        if(n<10)
        {
            printf("Plus grand !! \n");
            printf("Saisir un entier \n");
            scanf("%d",&n);

        }
        else
        {
            printf("Plus petit !! \n");
            printf("Saisir un entier \n");
            scanf("%d",&n);

        }
    }

    printf("BRAVO !!");


    return 0;
}
