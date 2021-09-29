
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include  "TypeConstGVar.h"

// Pas du tout canonique
// utlise ici pour simplicite 
// effet = equivalent d'aligner les codes 
// dans un SEUL fichier: main
// alors que ces codes sont physiquement
// repartis ds plusieurs fichiers
// Dans une vraie programmation modulaire
// ces *.c seront compiles separemment 
// pour obtenir les *.o correspondants
// les fonctions d'un *.c seront communiques aux 
// autres *.c qui en ont besoin par #include de *.h
// in fine, le "link" des *.o permet d'obtenir l'excutable
// cf les exemples elementaires que nous avons realises ensemble
//

#include  "RecordUtil.c"
#include  "ListUtil.c"
#include  "FileUtil.c"

int  main(int argc, char **argv)
{	
	ListDescriptor ld;

    char nomf[MAX_FILE_NAME_LENGTH];
	char mode;
    
	printf("MAX_FILE_NAME_LENGTH,: %d, taill %d\n", MAX_FILE_NAME_LENGTH, sizeof(nomf));

    if (argc<3) {
        printf("Usage: %s nom-fichier mode (p, c, a)\n", argv[0]);
        exit(0);
    }
    // argv[1]=nomf, argv[2]=mode

    // nom fichier
    strcpy(nomf, argv[1]);
    // mode= arg 2, singleton, ou 1er char (disinctif)
	mode=argv[2][0];
   
    switch(mode) {
		case 'p': // todo affiche
		break;
	// --------------------------------------
		case 'c': 

	initListDescriptor(&ld, nomf);
	printListFromDescriptor(ld);
	setList(&ld);
    printListFromDescriptor(ld);
    // new to test
	saveList(ld, nomf);
		
		break;
		case 'a': // todo append
		break;
		default:
		  printf(" non supported mode %c\n", mode);
		  exit(0);
	} // switch
	
	printf("nom fichie %s, mode=%c\n", nomf, mode);
	
    /*
    // ouverture en lecture seule ("r") ?????
    fp = fopen(nomf, "r");
    // CTRL *TRES VIVEMENT RECOMMANDE* du resultat
    if (fp ==NULL) {
        printf("file open error\n");
        exit(0);
    }

    fclose(fp);
	*/
	
    return 0;
}
