#include<stdio.h>
int main()
{
    int a,b,i,s;

    printf("Saisir un entier \n");
    scanf("%d",&a);
    printf("Saisir un deuxieme entier \n");
    scanf("%d",&b);

    s=0;

    for(i = 1;i<=a;i++)
    {
        s=s+b;
    }

    printf("La multiplication par additions successives est:%d",s);

    return 0;
}
