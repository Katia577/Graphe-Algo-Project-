#include <iostream>
#include "Graphe.h"

int main() {

    Graphe monGraphe(true); // le graphe est  orienté

//    std::cout<<" de Adjacence vers FS et APS \n ";
//
//    // Utiliser la fonction adj2fs_aps() pour convertir une matrice d'adjacence en fs et aps
//    std::vector<std::vector<int>> matriceAdj = {
//          {3, 3}, // Taille de la matrice (3x3)
//        {0, 1, 1},
//        {1, 0, 1},
//        {1, 1, 0}
//    };
//
//    monGraphe.adj2fs_aps(matriceAdj);
//    monGraphe.afficherFS();
//    monGraphe.afficherAPS();
//     std::cout<< std::endl;
//     std::cout<<" de FS et APS vers  M_Adjacence ";
//    // Utiliser la fonction fs_aps2adj() pour convertir fs et aps en une matrice d'adjacence
//    std::vector<std::vector<int>> nouvelleMatriceAdj = monGraphe.fs_aps2adj();
//
//    // Afficher la nouvelle matrice d'adjacence
//    std::cout << "Nouvelle matrice d'adjacence : " << std::endl;
//    for (const auto& ligne : nouvelleMatriceAdj) {
//        for (int element : ligne) {
//            std::cout << element << " ";
//        }
//        std::cout << std::endl;
//    }

/** Tester la creation de graphe par la saisie */
 monGraphe.creerGraphe();
std::cout<<std::endl;
 std::cout<< "Affichage des fs aps apres creation avec Creer Graphe  ";
 monGraphe.afficherFS();
 monGraphe.afficherAPS();




    return 0;
}
