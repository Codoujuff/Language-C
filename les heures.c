#include <stdio.h>
void coco(int h, int m, int s)
{
        printf("%dh:%dm:%ds",h,m,s);
}

void main()
{

    int h,m,s, resultat;

    printf("Saisir le nombre d'heure\n");
    scanf("%d",&h);
    do
    {
        //printf("Saisir une heure convenable\n");
    }
    while(h>23);
    if(h==23)
    {
        h=0;
    }


    printf("Saisir le nombre de minutes\n");
    scanf("%d",&m);

    do
    {
        //printf("Saisir des minutes raisonnable\n");
    }
    while(m>59);
    if(m==59)
    {
        m=0;
    }
    else
    {
        m=m+1;
    }

    printf("Saisir le nombre de seconde\n");
    scanf("%d",&s);

    coco(h, m, s);
}
