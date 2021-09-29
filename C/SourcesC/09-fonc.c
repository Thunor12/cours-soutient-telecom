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

//
int main(void)
{
//
    int arret=0;
    int note;
    char niveau;

    // Appel (utilisation) de la fonction myShift
    printf("shift de %d par %d=%d \n", 1, 2, myShift(1, 2));

    // Boucle permettant plusieurs operations de saisie
    while ( !(arret) ) {
        // do.. while assurant une note entre 0..20
        do {
            printf("donner une note (0..20)\n");
            scanf("%d", &note);
        } while ( (note<0) || (note >20) );
        // Appel de Note2Niveau et DonnerAppreciation
        // Rendant le bloc principal
        // a) plus compact
        // b) plus lisible
        // c) plus modulaire
        niveau = Note2Niveau(note);
        printf("Note=%d, Niveau=%c, Appreciation: ",  note, niveau);
        DonnerAppreciation(niveau);
        // option:  poursuite vs arret
        printf("Rentrer 1 pour quitter 0 pour continuer \n");
        scanf("%d", &arret);
    } // fin while ( !(arret) )
//
    return 1;
}
