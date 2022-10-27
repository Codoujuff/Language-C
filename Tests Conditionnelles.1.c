#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Saisir 3 entiers\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if((a<b)&&(c<b))
    {
        if(a<c)
        {
            printf("l'ordre est:%d,%d,%d",b,c,a);
        }
        else
        {
            printf("l'ordre est:%d,%d,%d",b,a,c);
        }
    }
    else if((b<a)&&(c<a))
    {
        if(b<c)
        {
            printf("l'ordre est:%d,%d,%d",a,c,b);
        }
        else
        {
            printf("l'ordre est:%d,%d,%d",a,b,c);
        }
    }
    else if((a<c)&&(b<c))
    {
        if(a<b)
        {
            printf("l'ordre est:%d,%d,%d",c,b,a);
        }
        else
        {
            printf("l'ordre est:%d,%d,%d",c,a,b);
        }
    }

    return 0;
}
