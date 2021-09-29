// Usage nom-prog nom-fichier n
// Imprimer n premieres lignes du nom-fichier
// n=0 ==> tout imprimer
// points techniques
// 1) arguments main
// 2) lecture fichier par ligne
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int  main(int argc, char **argv)
{

    FILE *fp;

    char nomf[80];
    char lineContent[1000];
    int nbLine;
    int MaxLine=999999;

    if (argc<3) {
        printf("Usage: %s nom-fichier nb-ligne(0:total)\n", argv[0]);
        exit(0);
    }
    // argv[1]=nomf, argv[2]=nbLine

    // nom fichier
    strcpy(nomf, argv[1]);
    // argv[] are strings! atoi: ascii -> int
    nbLine=atoi(argv[2]);
    if (nbLine==0) nbLine=MaxLine;

    printf("nom fichie %s, nbligne=%d\n", nomf, nbLine);

    //
    // ouverture en lecture seule ("r")
    fp = fopen(nomf, "r");

	
    // CTRL *TRES VIVEMENT RECOMMANDE* du resultat
    if (fp ==NULL) {
        printf("file open error\n");
        exit(0);
    }

    int i=0;
    while (  ( fgets(lineContent, sizeof(lineContent), fp)  != NULL )
             && (i<nbLine) )
    {
        printf("%s", lineContent);
        i++;
    }; // while fgets

    fclose(fp);
	
    return 1;
}
/*  deroulement
nomprg textfile.txt 3
Output
1: 1ere ligne, avec fprintf
2:envoie une 2nd ligne (un string avec fin-ligne)
3: 3ieme ligne
*/