// Strings
//
#include <stdio.h>
// necessaire pour manipuler des strings
#include <string.h>
//
int main(void)
{
    char msg[80] = "TPT";
    char myInput[80];
    char sx[80];
    int  i;

    // sx pas initialise: valeur aleatoire
    printf("Au demarrage: Msg=%s, sx=%s\n", msg, sx);

    // boucle permettant de tester differentes valeurs
    // avec STOP comme signal d'arret
    do {
        // copy:  msg => sx:
        // Attention la position: DROITE(msg) vers GAUCHE (sx)
        strcpy(sx, msg);
        //
        printf("Apres strcpy(sx, msg), sx=%s\n", sx);

        // concatenation: rajouter msg dans la suite de sx
        strcat(sx, msg);
        printf("Apres strcat(sx, msg), sx=%s, ", sx);
        // taille
        printf("sa taille=%d\n", strlen(sx));

        // Comparaison:
        strcpy(sx, "PTP"); // sx = "PTP"
        i = strcmp(sx, msg);
        printf("Comparaison entre sx(%s) et msg(%s) donnant %d => ", sx, msg, i);
        if (i==0) {
            printf("les 2 sont identiques\n");
        }
        else if (i>0) {
            printf("sx(%s)> msg(%s) \n", sx, msg);
        }
        else {
            printf("sx(%s)< msg(%s) \n", sx, msg);
        }

        printf("Donner votre avis (STOP pour quitter) SVP\n");
        scanf("%s", myInput);
        printf("Vous avez dit: %s\n", myInput);
        // anticipe le prochain tour, msg ms a la valeur myInput
        strcpy(msg, myInput);
        //
    } // do
    // if equal: yied "0" so, exit while loop!
    while ((strcmp(myInput, "STOP" )));

    printf("Merci et a bientot\n");
//
    return 1;
}
/* ------------ output
Au demarrage: Msg=TPT, sx=a1b2c3d4
Apres strcpy(sx, msg), sx=TPT
Apres strcat(sx, msg), sx=TPTTPT, sa taille=6
Comparaison entre sx(PTP) et msg(TPT) donnant -1 => sx(PTP)< msg(TPT)
Donner votre avis (STOP pour quitter) SVP
Vous avez dit: ENST
Apres strcpy(sx, msg), sx=ENST
Apres strcat(sx, msg), sx=ENSTENST, sa taille=8
Comparaison entre sx(PTP) et msg(ENST) donnant 1 => sx(PTP)> msg(ENST)
Donner votre avis (STOP pour quitter) SVP
Vous avez dit: STOP
Merci et a bientot
*/