
// Sauve le contenu d'une liste dan un fichier donne (avec son nom)
//
void saveList(ListDescriptor ld, char* nomf)
{

    FILE *fp;

    printf("Sauve list %s, dans le fichier %s\n", ld.name, nomf);

    //
    // ouverture selon le mode en question
    fp = fopen(nomf, "w+");
	
    // CTRL *TRES VIVEMENT RECOMMANDE* du resultat
    if (fp ==NULL) {
        printf("file open error\n");
        exit(0);
    }

    // printList vers un fichier
    fprintList(fp, ld.First);

    fclose(fp);
}
