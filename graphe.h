#ifndef GRAPHE_H_INCLUDED
#define GRAPHE_H_INCLUDED


typedef struct tArrete
{
    int sommet1;
    int sommet2;
}tArrete;

typedef struct tGraphe
{
    int sommets[sizeof(int)];
    tArrete arretes[sizeof(tArrete)];
}tGraphe;




#endif // GRAPHE_H_INCLUDED
