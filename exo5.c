#include<stdio.h>
int main()
{
    int tab[50],n,i,s=0;

    printf("Saisir la taille du tableau \n");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("Donnez tab[%d] \n",i);
        scanf("%d",&tab[i]);
    }
    for(i=0; i<n; i++)
    {
        printf("%d \n",tab[i]);
    }

    for(i=0; i<n; i++)
    {
        s=s+tab[i];
    }

    printf("La somme des elements du tabeau est:%d",s);
}
/*Ecrire un programme qui lit la dimension N d'un tableau T du type int (dimension maximale : 50
composantes), remplit le tableau par des valeurs entrées au clavier et affiche le tableau.
Calculer et afficher ensuite la somme des éléments du tableau.*/
