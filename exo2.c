#include<stdio.h>
int main()
{
    int i,n,s=0;

    printf("Saisir la valeur de n \n");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        s=s+i;
    }
    printf("La somme des n premier entier est %d",s);

    return 0;
}

/*#include<stdio.h>
int main()
{
    int i,d,f,s=0;

    printf("Saisir la valeur de d \n");
    scanf("%d",&d);
    printf("Saisir la valeur de f \n");
    scanf("%d",&f);


    if(d<f)
    {
        for(i=d; i<f; i++)
        {
            s=s+i;
        }
    }
    else if (d>f)
    {
         for(i=f; i<d; i++)
        {
            s=s+i;
        }
    }
    printf("La somme des entiers compris entre %d et %d est:%d",d,f,s);

    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int i,d,f,s=0,va;

    printf("Saisir la valeur de d \n");
    scanf("%d",&d);
    printf("Saisir la valeur de f \n");
    scanf("%d",&f);

    if(d<f)
    {
        for(i=d; i<f; i++)
        {
            s=s+i;
        }
    }
    else if (d>f)
    {
        for(i=f; i<d; i++)
        {
            s=s+i;
        }
    }

    if(s<0)
    {
        va=-s;
    }
    else if(s>0)
    {
        va=s;
    }
    printf("La somme des entiers compris entre %d et %d est:%d",d,f,va);

    return 0;
}*/
/*#include<stdio.h>
int main()
{
        int i,d,f,s=0,va;

    printf("Saisir la valeur de d \n");
    scanf("%d",&d);
    printf("Saisir la valeur de f \n");
    scanf("%d",&f);

    if(d<f)
    {
        for(i=d; i<f; i++)
        {
            s=s+i;
        }
    }
    else if (d>f)
    {
        for(i=f; i<d; i++)
        {
            s=s+i;
        }
    }

    if(s<0)
    {
        va=-s;
    }
    else if(s>0)
    {
        va=s;
    }
    printf("La somme des entiers compris entre %d et %d est:%d",d,f,va);

    return 0;// a continuer
}*/
/*Ecrire un programme qui permet de faire les opérations suivantes :
• Ecrire un programme qui affiche la somme des n premiers entiers naturels. La valeur de n
est saisie au clavier lors de l'exécution.
• Ecrire un programme qui affiche la somme des entiers compris entre les entiers d et f. Les
valeurs de d et f sont saisies au clavier lors de l'exécution.
• Ecrire un programme qui affiche la somme des valeurs absolues des en tiers compris entre
les entiers relatifs d et f. Les valeurs de d et f sont saisies au clavier lors de l'exécution.
• Ecrire un programme qui affiche la somme des valeurs absolues des entiers pairs compris
entre les entiers relatifs d et f. Les valeurs de d et f sont saisies au clavier lors de l'exécution.*/
