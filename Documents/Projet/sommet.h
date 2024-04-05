#ifndef SOMMET_H
#define SOMMET_H

#include "Point.h"

class Sommet {
private:
    int id;
    Point position;
   /*/ struct {      ????????????????????????
        int premierifno; 

    } info; 
    */
    
    // Autres données du sommet

public:
    Sommet(int identifiant, int x, int y);
    int getId() const;
    Point getPosition() const;
    // Getters et setters pour d'autres données du sommet
};

#endif // SOMMET_H