//
// Test divers file open mode
// Mode INTERACTIF
// Ecriture dans un fichiers (fprintf)
//
#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
//
int main(void)
{

    FILE *fp;
    char s[150]; // prevoit une ligne assez longue

//
    char mw[]="Ecrit";
//

    char nomf[]="test0830.txt";
    char mode[]="a+";
    char choix[]="noQuit";
    char check[]="No";

    int nb_line=3;

    do {

        // saisie
        do {
            printf("Donner le nom du fichier et le mode (e.g. a+)\n");
            scanf("%s %s", nomf, mode);
            printf("Votre choix:nomf=%s, mode=%s, OK pour conf\n", nomf, mode);
            scanf("%s", check);
        }
        while ( !(strcmp(check, "OK")==0) ) ; // while check

        fp = fopen(nomf, mode);
        // ALWAYS check if success openning
        if (fp == NULL ) {
            printf("No suche file %s, See you next time\n", nomf);
            // SORT (abandon) du programme
            exit(1);
        }
        //
        printf("rentrer le nb de lignes (<4) de texte a saisir\n");
        scanf("%d", &nb_line);
        if (nb_line>3) nb_line=3; // on a prevenu: <4
        // "purger" la ligne
        fgets(s, sizeof(s), stdin);
        //
        for (int i=0; i<nb_line; i++) {
            // i+1 sinon ca fait votre 0e ligne...
            printf("votre  ligne %1d SVP:\n", i+1);
            // lire la ligne (depuis le clavier=stdin)
            fgets(s, sizeof(s), stdin);
            // Affichage sur l'ecran (stdout) de la saisie (s)
            printf("%s:%s", mw, s);
            // ecrire la saisie (s) dans le fichier (fp)
            fprintf(fp, "%s", s);
        } // for
        // fermeture
        fclose(fp);
        printf("fermeture de %s\n", nomf);
        // recommence ?
        printf("Votre Choix (Quit pour quitter):\n");
        scanf("%s", choix);
    }
    while ( !(strcmp(choix, "Quit") == 0) );

    return 0;
}
