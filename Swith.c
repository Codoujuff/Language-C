#include<stdio.h>
int main()
{
    int r,l,L,b,h,c,s;
#define pi 3,14;
    char figure;

    printf("Choisir entre t,R,c \n");
    scanf("%c",&figure);

    switch(figure)
    {
    case 'c':{
        printf("Vous avez choisie le cercle\n");
        printf("Saisir la valeur du rayon \n");
        scanf("%d",&r);
        s=r*r*pi;
        printf("La superficie est %d",s);}
        break;
    case 'R':{
        printf("Vous avez choisie le rectangle\n");
        printf("Saisir la valeur de la longueur \n");
        scanf("%d",&L);
        printf("Saisir la valeur de la largeur \n");
        scanf("%d",&l);
        s=L*l;
        printf("La superficie est %d",s);}
        break;
    case 't':{
        printf("Vous avez choisie le triangle\n");
        printf("Saisir la valeur du cote \n");
        scanf("%d",&c);
        printf("Saisir la valeur de la hauteur \n");
        scanf("%d",&h);
        s=(c*h)/2;
        printf("La superficie est %d \n",s);}
        break;
    default:
        printf("Choix non disponible \n");
        printf("Choisir une figure");
        scanf("%c",&figure);


    }
    return 0;
}
