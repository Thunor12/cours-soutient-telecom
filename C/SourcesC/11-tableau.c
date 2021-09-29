// Tableau
//
#include <stdio.h>
// declaration avec initialisation
int gv3[3] = {3, 5, 8};
int gv6[6] = {1, 2, 3, 4, 5, 6};
int gv8[8] = {1, 2, 3, 4, 5, 6, 7, 8};

// Un tableau a 3 dimensions
// dont chaque element est un tableau a 2 dimensions
int gm[3][2] = { {0,1}, {2,3}, {4,5} };

// Un utilitaire d'affichage, pour matrice (tableau de tableau)
void mPrint(int m[3][2])
{
// double boucle
    for (int i = 0; i < 3; i++ ) {
        for (int j = 0; j < 2; j++ ) {
            printf("m[%d][%d] = %d  ", i,j, m[i][j] );
        } // for j
        printf("\n");
    } // for i
}
//

// Un utilitaire d'affichage, pour vecteur (tableau)
void vPrint(int v[6])
{
    for (int i = 0; i < 6; i++ ) {
        printf("v[%d] = %d, ", i, v[i]);
    }
    printf("\n");
}

//
int main(void)
{
    // affichage du contenu d'un tableau sans utiliser vPrint
    for (int i = 0; i < 3; i++ ) {
        printf("gv3[%d] = %d, ", i, gv3[i]);
    }
    printf("\n"); // fin du vecteur gv, passer a la ligne suivante*
    //
    // Affichage via la fonction vPrint
    vPrint(gv6);
    // un vecteur plus court
    vPrint(gv3);
    //  un vecteur plus long
    vPrint(gv8);
    //
    // vPrint prend tous les 3, meme si seul gv6 est int v[6]
    // car type compatible: tableau (vecteur) INT
    // MAIS, il affiche systematiquement 6 elements
    // - cas gv3: 3 derniers elements v[3]..v[5]
    // auront des valeurs aleatoires, car il s'agit des cases
    // memoires qui SUIVENT celles de gv3[2] mais qui ne font
    // pas partie de gv3
    // - cas gv8: les 2 derniers cases sont ignorees
    //
    // imprimer la matrice gm
    mPrint(gm);
    //
    // vPrint IMPOSSIBLE car type incompatible! (tableau vs tableau des tableaux)
    // vPrint(gm);
    //
//
    return 1;
}
/* output
gv3[0] = 3, gv3[1] = 5, gv3[2] = 8,
v[0] = 1, v[1] = 2, v[2] = 3, v[3] = 4, v[4] = 5, v[5] = 6,
v[0] = 3, v[1] = 5, v[2] = 8, v[3] = 1, v[4] = 2, v[5] = 3,
v[0] = 1, v[1] = 2, v[2] = 3, v[3] = 4, v[4] = 5, v[5] = 6,
m[0][0] = 0  m[0][1] = 1
m[1][0] = 2  m[1][1] = 3
m[2][0] = 4  m[2][1] = 5
*/