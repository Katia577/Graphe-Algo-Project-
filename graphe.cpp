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
void Graphe::adj2fs_aps(std::vector<std::vector<int>> a)
{ int n= a[0][0];
  int m= a[0][1];
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
        if(a[lig][col]==1)
        {
             fs[i]=col;
             i++;
        }
    }
    fs[i]=0;
    i++;
  }

}
