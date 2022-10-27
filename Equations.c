#include<stdio.h>
int main()
{
    int a,b,c;
    float x1,x2,x0,d;

    printf("Saisir les valeurs de a,b et c\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    d=(b*b)-(4*a*c);

    if(d>0)
    {
        x1=(-b+sqrt(d))/(2*a);
        x1=(-b-sqrt(d))/(2*a);
        printf("L'equation qdmet deux solutions reelles:x1=%f et x2=%f",x1,x2);
    }
    else if (d==0)
    {
        x0=(-b)/(2*a);
        printf("L'equation admet une solution double:x0=%d",x0);
    }

    else
    {
        printf("L'equation n'admet pas de solution reelle");
    }

  return 0;
}
