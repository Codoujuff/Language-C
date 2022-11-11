#include<stdio.h>
int main()
{
    int n;
    int nm;
    nm=7;

    printf("Saisir le nombre magique \n");
    scanf("%d",&n);
    while(n!=nm)
    {
        if(n<nm)
        {
            printf("Plus Grand!! \n");
            printf("Saisir le nombre magique \n");
            scanf("%d",&n);
        }
        else if(n>nm)
        {
            printf("Plus petit!! \n");
            printf("Saisir le nombre magique \n");
            scanf("%d",&n);
        }
    }
    if(n==nm)
    {
        printf("Bravo vous avez trouve le nombre magique");
    }
}
/*Ecrire un programme C qui définit un nombre magique (un nombre secret), et lit des entiers à
l'entrée jusqu'à ce que l'utilisateur trouve ce nombre. En lui indiquant à chaque fois s'il est en dessus
ou au-dessous du nombre magique*/
