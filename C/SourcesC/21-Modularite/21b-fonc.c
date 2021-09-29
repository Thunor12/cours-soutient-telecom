// Fonction
//
#include <stdio.h>
//
// Un exemple simple
int myShift(int a, int d)
{
    a = a + d;
    return a;
}
//
// Conversion Note en niveau
char Note2Niveau(int note)
{
    char niveau;
    if (note>=18) {
        niveau = 'A';
    }
    else if (note>=16) {
        niveau = 'B';
    }
    else if (note>=14) {
        niveau = 'C';
    }
    else if (note>=12) {
        niveau = 'D';
    }
    else if (note>=10) {
        niveau = 'E';
    }
    else  {
        niveau = 'F';
    }
    return niveau;
} // fin Note2Niveau

// Afficher Appreciation
// la fonction NE produit PAS une valeur en retour
// d'ou void (aucun retour)
void DonnerAppreciation(char niveau)
{
    switch(niveau) {
    case 'A' :
        printf("Bravo!\n");
        break;
    case 'B' :
    case 'C' :
        printf("Bien!\n" );
        break;
    case 'D' :
        printf("OK.\n" );
        break;
    case 'E' :
        printf("Pourrait mieux faire\n" );
        break;
    default :
        printf("Oops, je n'ai pas prevu ce cas\n" );
    }
} // fin DonnerAppreciation
