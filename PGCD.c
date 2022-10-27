#include<stdio.h>
int main()
{
    int a,b,x,y,R;

    printf("Saisir un entier a \n");
    scanf("%d",&a);
    printf("Saisir un entier b \n");
    scanf("%d",&b);

    if(a>b)
    {
        x=a;
        y=b;
    }
    else
    {
        x=b;
        y=a;
    }


    while(x%y!=0)
    {
        R=x%y;
        x=y;
        y=R;
    }
    printf("Le PGCD est:%d",y);


    return 0;

}

