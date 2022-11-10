#include<stdio.h>
#include<stdlib.h>
void coco(int a, int i, int n)
{
     for(i=1; i<n+1; i++)
    {
        a=a*10+i;
        printf("%d\n",a);
    }
}
void main()
{
    int i,a,n,res;

    printf("Saisir un entier \n ");
    scanf("%d",&n);
    coco(a,i,n);
}
