#include<stdio.h>
int main()
{
    int tab[10],i,p=0,ne=0,nu=0,n;

    printf("Saisir la taille du tableau \n");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        printf("Donner tab[%d] \n",i);
        scanf("%d",&tab[i]);

         if(tab[i]>0)
         {
             p++;
         }
         else if(tab[i]<0)
         {
            ne++;
         }
         else if(tab[i]==0)
         {
             nu++;
         }
     }
     printf("le nombre de valeur positive est %d\n le nombre de valeur negative est %d\n le nombre de valeur nul est %d",p,ne,nu);

     return 0;

}
/*#include<stdio.h>
int main()
{
    int tab[10],i,n,s=0;

    printf("Saisir la taille du tableau \n");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        printf("Donner tab[%d] \n",i);
        scanf("%d",&tab[i]);

        s=s+tab[i];
    }
    printf("La somme des elements du tableau est %d:",s);
    return 0;
}*/
