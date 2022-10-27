#include<stdio.h>
int main()
{
    int n,VA;

    printf("Saisir un nombre \n");
    scanf("%d",&n);

    if(n>0)
    {
        VA=n;
    }
    else
    {
        VA=-n;
    }

    printf("La valeur absolue est:%d \n",VA);

    return 0;
}
