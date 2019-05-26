#include <stdio.h>
#include <stdlib.h>

#include "graphe.h"

int main()
{
    tGraphe graphe1;
    int i = 0, ordreGraphe = 0, lol = 0;

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
            printf("Entrez un sommet relier au sommet %d : ", i);
            scanf("%d", &lol);
            if((lol > i) && (lol <= ordreGraphe))
            {
                graphe1.arretes[i].sommet1 = graphe1.sommets[i];
                graphe1.arretes[i].sommet2 = lol;
            }
            else if(lol != 0)
            {
                printf("Erreur de saisie\n");
            }
            else
            {
                printf("Sommet suivant\n\n");
            }
        }while(lol != 0);
    }

//    do
//    {
//        printf("Entrez les sommets d'une arrete\n");
//        scanf("%d,%d",&arrete1.sommet1, &arrete1.sommet2);
//        graphe1.arretes[i].sommet1 = arrete1.sommet1;
//        graphe1.arretes[i].sommet2 = arrete1.sommet2;
//    }while((arrete1.sommet1 <= ordreGraphe) && (arrete1.sommet1 > 0) &&
//           (arrete1.sommet2 <= ordreGraphe) && (arrete1.sommet2 > 0));

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
