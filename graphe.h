#ifndef GRAPHE_H
#define GRAPHE_H

#include <vector>
#include "Sommet.h"
#include "Arete.h"
class Graphe {
private:
    std::vector<int> sommets;
    std::vector<int> aretes;
     std::vector<int> fs;
      std::vector<int> aps;

    bool oriente; // true pour un graphe orienté, false pour un graphe non orienté

public:
    Graphe(bool estOriente);

     void afficherFS();
     void afficherAPS();
     std::vector < std::vector<int>> fs_aps2adj();
     void adj2fs_aps(std::vector<std::vector<int>> a);
    // Méthodes pour manipuler le graphe
};

#endif // GRAPHE_H
