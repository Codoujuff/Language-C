#include<stdio.h>
int main ()
{
    int a,b,c,d;
    printf("Veuillez saisir un entier \n");
    scanf("%d",&a);
    printf("Veuillez saisir un entier \n");
    scanf("%d",&b);
    printf("Veuillez saisir un entier \n");
    scanf("%d",&c);
    if (a<b)
        if (c<a)
        printf("Le minimum est %d:" , c);
    else{
        printf("Le minimum est %d:"  , a);
    }
    else
        if(c<b)
        printf("Le minimum est %d:", b);
    return 0;
}
