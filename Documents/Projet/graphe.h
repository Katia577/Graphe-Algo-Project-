#ifndef GRAPHE_H
#define GRAPHE_H

#include <vector>
#include "Sommet.h"
#include "Arete.h"

class Graphe {
private:
    std::vector<Sommet*> sommets;
    std::vector<Arete*> aretes;
    bool oriente; // true pour un graphe orienté, false pour un graphe non orienté

public:
    Graphe(bool estOriente);
    void ajouterSommet(Sommet* sommet);
    void ajouterArete(Arete* arete);
    // Méthodes pour manipuler le graphe
};

#endif // GRAPHE_H
