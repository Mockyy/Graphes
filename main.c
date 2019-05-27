#include <stdio.h>
#include <stdlib.h>

#include "graphe.h"

int main()
{
    tGraphe graphe1;
    int i = 0, ordreGraphe = 0, saisie = 0;

    printf("Combien de sommets possede le graphe ?\n");
    scanf("%d",&ordreGraphe);

    for(i=1; i<=ordreGraphe; i++)
    {
        graphe1.sommets[i] = i;
    }

    for(i=1; i<=ordreGraphe; i++)
    {
        do
        {
            printf("Entrez un sommet relier au sommet %d (0 pour passer au suivant) : ", i);
            scanf("%d", &saisie);
            if((saisie > i) && (saisie <= ordreGraphe))
            {
                graphe1.arretes[i].sommet1 = graphe1.sommets[i];
                graphe1.arretes[i].sommet2 = saisie;
            }
            else if(saisie != 0)
            {
                printf("Erreur de saisie\n");
            }
            else
            {
                printf("Sommet suivant\n\n");
            }
        }while(saisie != 0);
    }

    printf("\nSommets = {");
    for(i=1; i<=ordreGraphe; i++)
    {
        printf("%d, ", graphe1.sommets[i]);
    }
    printf("}\n");

    printf("\nArretes = {");
    for(i=0; i<ordreGraphe; i++)
    {
        printf("{%d,%d}, ", graphe1.arretes[i].sommet1, graphe1.arretes[i].sommet2);
    }
    printf("}\n");

    return 0;
}
