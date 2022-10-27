#include<stdio.h>
#include<math.h>
int main()
{
    int prixHT,NA,TTC;
    float TVA;

    printf("Saisir le prix HT,le nombre d'article vendus et le taux de TVA de l'article\n");
    scanf("%d\n",&prixHT);
    scanf("%d\n",&NA);
    scanf("%f",&TVA);

    prixHT=prixHT*NA;
    TVA=TVA/100;
    TTC=prixHT+(prixHT*TVA);

    printf("le prix total TTC est:%d",TTC);


    return 0;
}
