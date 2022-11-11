#include<stdio.h>
int main()
{
    int tab[10],i,n;

    printf("Donne la taille du tableau\n");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        printf("Donnez tab[%d] \n",i);
        scanf("%d",&tab[i]);
    }
    for(i=1; i<=n; i++)
    {
        printf("%d",tab[i]);
    }

    return 0;

}
/*Saisir puis afficher un tableau d’entiers de taille n donné par l’utilisateur*/
