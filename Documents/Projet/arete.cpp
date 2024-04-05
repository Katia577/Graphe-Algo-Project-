#include "Arete.h"

Arete::Arete(Sommet* start, Sommet* end, int donnee) : debut(start), arrivee(end), poids{donnee} 
{}

Sommet* Arete::getDebut() const
 { return debut; }
 
Sommet* Arete::getArrivee() const
 { return arrivee; }
  int Arete:: getInfo() const 
  {
    return poids; 
  } 
