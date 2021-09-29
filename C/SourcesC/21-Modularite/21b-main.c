// Fonction
//
#include <stdio.h>
//
#include "21b-fonc.h"
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
        // plus modulaire
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
