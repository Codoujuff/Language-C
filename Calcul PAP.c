#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int PU,QTCOM,TOT,PAP;
    float REMISE,PORT;


    printf("Saisir le prix unitaire \n");
    scanf("%d",&PU);
    printf("Saisir la quantite commande \n");
    scanf("%d",&QTCOM);

    TOT=PU*QTCOM;


    if(TOT>5000)
    {
       PORT=0;
    }
    else
    {
       PORT=TOT*(0.02);
    }


    if(TOT>2000&&TOT<10000)
    {
        REMISE=TOT*(0.05);
    }
    else if(TOT>10000)
    {
        REMISE=TOT*(0.1);
    }

    PAP=TOT+PORT-REMISE;

    printf("Le prix a paye est: \n",PAP);
    printf("Le port est: \n",PORT);
    printf("La remise est: \n",REMISE);

    return 0;
}
