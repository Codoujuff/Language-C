#include<stdio.h>
#include<stdlib.h>
int main()
{
    int h,m,s;

     printf("Saisir le nombre d'heure\n");
    scanf("%d",&h);
    while(h>23 ||h<0)
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
    while(m>59 ||m<0)
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


    printf("Saisir le nombre de seconde \n");
    scanf("%d",&s);
    while(s>59 || s<0)
    {
        printf("Saisir des secondes raisonnables\n");
        printf( "\n" ) ;
        printf("Saisir le nombre de seconde\n");
        scanf("%d",&s);
        printf( "\n" );
    }
    if(s==59)
    {
        s=0;
        m=m+1;

    }
    else
    {
        s=s+1;
    }

    printf(" Il est %dh:%dm: %ds:",h,m,s);


    return 0;
}

