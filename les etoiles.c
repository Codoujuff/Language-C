#include<stdio.h>
#include<stdlib.h>

void coco(int i, int n, int j)
{
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("* ");
        }
         printf("\n");
    }
}
int main()
{
    int i,n,j;
    printf("Saisir un entier \n ");
    scanf("%d",&n);
    coco(i,n,j);
}
