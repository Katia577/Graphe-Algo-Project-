#include "Graphe.h"
#include <iostream>


Graphe::Graphe(bool estOriente) : oriente(estOriente) {}

/** fonction pour afficher FS et APS */

    void Graphe::afficherFS() {
     std::cout << "FS : ";
        for (int i = 0; i < fs.size(); ++i) {
            std::cout << fs[i] << " ";
        }
        std::cout << std::endl;
    }

    void Graphe::afficherAPS() {
        std::cout << "APS : ";
        for (int i = 0; i < aps.size(); ++i) {
            std::cout << aps[i] << " ";
        }
        std::cout << std::endl;
    }

/** Afficher la Matrice d'Adjacence */
 void Graphe::afficherMatrice_Adjacence()
  {
        int n = aps.size() - 1;
        std::vector<std::vector<int>> matriceAdjacence(n + 1, std::vector<int>(n + 1, 0));

        // Remplir la matrice d'adjacence
        for (int i = 1; i <= n; ++i) {
            int debut = aps[i];
            int fin = (i == n) ? fs.size() - 1 : aps[i + 1] - 1;
            for (int j = debut; j <= fin; ++j) {
                int sommet = fs[j];
                if (sommet != 0) {
                    matriceAdjacence[i][sommet] = 1;
                }
            }
        }

        // Afficher la matrice d'adjacence
        std::cout << "Matrice d'adjacence :" << std::endl;
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                std::cout << matriceAdjacence[i][j] << " ";
            }
            std::cout << std::endl;
        }
}

////retourne une fonction d'adjacence a partir des fs et aps
std::vector<std::vector<int>> Graphe::fs_aps2adj()
 {
   int n = aps[0];
   std::vector<std::vector<int>> a(n + 1, std::vector<int>(n + 1, 0));
    for (int i = 0; i < n + 1; i++) {

    for (int j = 0; j <= n; j++) {
        a[i][j] = 0;
    }
   }

   int sommet=1;
   for(int indice_fs= 1; indice_fs< fs[0]; indice_fs++)
   {
    if(fs[indice_fs]!=0)
     {
        a[sommet][fs[indice_fs]]=1;
     }
     else
     {
        sommet++;
     }
   }
   return a;
 }

// fs _aps a partir de la matrice d'adjacence
void Graphe::adj2fs_aps()
{ int n= Adj[0][0];
  int m= Adj[0][1];
  fs.resize(n+m+1);
  aps.resize(n+1);
  fs[0]= n+m;
  aps[0]=n;
  int i=1;
  for(int lig=1; lig<=n; lig++)
  {
    aps[lig]=i;
    for(int col=1; col<=m; col++)
    {
        if(Adj[lig][col]==1)
        {
             fs[i]=col;
             i++;
        }
    }
    fs[i]=0;
    i++;
  }
}


/**Créer un Graphe */
 void Graphe::creerGraphe() {

    int n; // Nombre de sommets

        std::cout << "Nombre de sommets : ";
        std::cin >> n;

        Adj.resize(n + 1, std::vector<int>(n + 1, 0));
         Adj[0][0] = n;
        std::cout << "Saisissez les successeurs de chaque sommet en séparant par des espaces et terminant par 0 pour chaque sommet :" << std::endl;
        for (int i = 1; i <= n; ++i) {
            int successeur;
            std::cout << "Successeurs du sommet " << i << " : ";
            do {
                std::cin >> successeur;
                if (successeur != 0) {
                    Adj[i][successeur] = 1;
                }
            } while (successeur != 0);
        }

         // Calculer le nombre d'arêtes
        int m = 0;
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (Adj[i][j] == 1) {
                    ++m;
                }
            }
        }

        // Ajouter le nombre d'arêtes dans la première ligne de la matrice d'adjacence
        Adj[0][1] = m;

        /** Mettre à jour les fs et aps à partir de la matrice d'adjacence*/
        adj2fs_aps();
    }
