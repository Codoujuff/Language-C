#include<stdio.h>
int main()
{

    int e1=11,e2=2,p1;
    float r1=11,r2=2,d1,d2,p2,r;

    p1=e1*e2;
    d1=e1/e2;
    r=e1%e2;
    printf("pour les entiers:\n");
    printf("le produit est:%d\n la division est:%f\n le reste de la division est:%f\n",p1,d1,r);

    p2=r1*r2;
    d2=r1/r2;
    printf("pour les reels:\n");
    printf("le produit:%f\n la division:%f",p2,d2);

    return 0;

}
