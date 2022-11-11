#include<stdio.h>
int main()
{
    int tab[10],i,p=0,ne=0,nu=0,n,min,max,s=0;
    float moy;

    printf("Saisir la taille du tableau \n");
    scanf("%d",&n);

    for(i=0; i<n; i++)
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
        min = tab[0] ;
        if (tab[i] < min)
        {
            min = tab[i];
        }
        max = tab[0] ;
        if (tab[i] > min)
        {
            max = tab[i];
        }

    }
    for(i=0; i<n; i++)
    {
        s=s+tab[i];
        moy=s+tab[i]/n;
    }

    printf("le nombre de valeur positive est: %d\n le nombre de valeur negative est: %d\n le nombre de valeur nul est :%d \n le maximum est :%d \n le minimum est :%d \n la somme est :%d\n la moyenne est:%d",p,ne,nu,max,min,s,moy);

    return 0;

}
/*Ecrire un programme qui permet de donner le nombre d’éléments positifs, le nombre d’éléments
négatifs, le nombre d’éléments nuls, le min, le max et la moyenne du tableau.*/
