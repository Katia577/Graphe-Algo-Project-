#ifndef ARETE_H
#define ARETE_H

#include "Sommet.h"

class Arete {
private:
    int poids; 
    Sommet* debut;
    Sommet* arrivee;

public:
    Arete(Sommet* start, Sommet* end, int donnee);
    Sommet* getDebut() const;
    Sommet* getArrivee() const;
    int getInfo() const ; 
};

#endif // ARETE_H
