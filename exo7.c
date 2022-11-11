#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,a,b;
    printf("Donner un entier positif:\n");
    scanf("%d",&a);
    b=0;
    while(a>0)
    {
        i=a%10;
        b=10*b+i;
        a=a/10;
    }
    printf("l'inverse de l'entier est %d\n",b);

    return 0;
}
/*Ecrire un programme C qui lit un entier et l'affiche inversé. On choisira de ne pas afficher chiffre
par chiffre mais de construire l'entier inversé puis l'afficher.
Ex: si l'entrée est 12345 on doit afficher l'entier 54321*/
