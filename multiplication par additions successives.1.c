#include<stdio.h>
int main()
{
    int a,b,i,s;

    printf("Saisir deux entiers \n");
    scanf("%d",&a);
    scanf("%d",&b);
while(a<0||b<0)
{
    printf("Saisir des entiers positifs");
}
    s=0;

    if(a<b)
    {

    for(i = 1 ; i <= a ; i++)
    {
        s=s+b;
    }

    printf("La multiplication par additions successives est:%d",s);
    }

    else
    {
         for(i = 1 ; i = b ; i++)
    {
        s=s+a;
    }

    printf("La multiplication par additions successives est:%d",s);
    }

   return 0;
}
