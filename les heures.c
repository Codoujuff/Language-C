#include <stdio.h>
void coco(int h, int m, int s)
{
    printf("%dh:%dm:%ds",h,m,s);
}

void main()
{

    int h,m,s;

    printf("Saisir le nombre d'heure\n");
    scanf("%d",&h);
    while(h>23)
    {
        printf("Saisir une heure convenable\n");
        printf( "\n" ) ;
        printf("Saisir le nombre d'heure\n");
        scanf("%d",&h);
        printf( "\n" );
    }
    if(h==23)
    {
        h=0;
    }

    printf("Saisir le nombre de minute \n");
    scanf("%d",&m);
    while(m>59)
    {
        printf("Saisir des minutes raisonnables\n");
        printf( "\n" ) ;
        printf("Saisir le nombre de minute\n");
        scanf("%d",&m);
        printf( "\n" );
    }
    if(m==59)
    {
        m=0;
        h=h+1;
    }
    else
    {
        m=m+1;
    }

    printf("Saisir le nombre de seconde\n");
    scanf("%d",&s);


    coco(h, m, s);
}
