#include "Graphe.h"

Graphe::Graphe(bool estOriente) : oriente(estOriente) {}

void Graphe::ajouterSommet(Sommet* sommet) {
    sommets.push_back(sommet);
}         

void Graphe::ajouterArete(Arete* arete) {
    aretes.push_back(arete);
    if (!oriente) {
        // Pour un graphe non orienté, ajout d'une seconde arête en sens inverse
        Sommet* debut = arete->getDebut();
        Sommet* arrivee = arete->getArrivee();
        int donne= arete->getInfo(); 
        aretes.push_back(new Arete(arrivee, debut, donne));
    }

}
