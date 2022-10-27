#include<stdio.h>
int main()

{
    int n1,n2,n3,n4,s;
    float m;

    printf("saisir 4 nombres\n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    scanf("%d",&n4);

    s=n1+n2+n3+n4;
    m=s/4;

    printf("somme=%d,moyenne= %f",s,m);

    return 0;

}
