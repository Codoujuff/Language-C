#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,a,n;
    a=0;
    printf("Saisir un entier \n ");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
      a=a*10+i;
      printf("%d\n",a);
    }

    return 0;
}
