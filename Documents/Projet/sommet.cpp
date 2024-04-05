#include "Sommet.h"

Sommet::Sommet(int identifiant, int x, int y) : id(identifiant), position(x, y) 
{}

int Sommet::getId() const 
{ return id; }

Point Sommet::getPosition() const
 { return position; }