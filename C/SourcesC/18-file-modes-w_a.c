// Tester les  modes w, a
// a) w et a: creation fichier si inexistant
// b) w: ECRASE l'existant
// c) a: RAJOUTE a l'existant (append)
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int  main(int argc, char **argv)
{

    FILE *fp;

    char nomf[80];
    char mode[]="r+";
    int nbLine;
    int MaxLine=9;

    if (argc<4) {
        printf("Usage: %s nom-fichier nb-ligne(0:total) mode (w, a) \n", argv[0]);
        exit(0);
    }
    // argv[1]=nomf, argv[2]=nbLine, argv[3]=mode

    // nom fichier
    strcpy(nomf, argv[1]);
    // argv[] are strings! atoi: ascii -> int
    nbLine=atoi(argv[2]);
    if (nbLine==0) nbLine=MaxLine;
    // mode
    strcpy(mode, argv[3]);

    printf("nom fichie %s, nbligne=%d, mode=%s\n", nomf, nbLine, mode);

    //
    // ouverture selon le mode en question
    fp = fopen(nomf, mode);
    // CTRL *TRES VIVEMENT RECOMMANDE* du resultat
    if (fp ==NULL) {
        printf("file open error\n");
        exit(0);
    }

      for (int i=0; i<nbLine; i++) {
            // i+1 sinon ca fait votre 0e ligne...
            fprintf(fp, "ligne %d\n", i+1);
        } // for

    fclose(fp);

    return 1;
}
