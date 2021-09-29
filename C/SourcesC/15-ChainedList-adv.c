// Chained list (liste cha\^in\'ee)
// version evoluee: 
// a) rajout SUPPLEMENTAIRE interactif
// b) affichage limite a L (L items) 
// (option que vous pourrez tester: nombre items parametrique
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//
// Modele (minimaliste) d'un usager
// Une unit\'e de stockage
// illustration ici de l'utilisation de typedef
typedef struct  Usager {
    char    nom[40];
    int     age;
    struct  Usager* next;
} Usager;

// liste (chaineee) des usagers

Usager* myList=NULL; // HEAD of my list
Usager* currentUsager=NULL; //current
// on a besoin d'un pointeur de travail
// en particulier pour creer une nouvelle unite
Usager* wu; // work,

char choix[]="Saisie";

//------------ 3 functions (plutot "procedure") utilitaires
// print Usager, avec un message circonstancie (msg)
int printUsager(char* msg, Usager* ux)
{
    printf("%s: nom=%s, age=%d\n", msg, ux->nom, ux->age);
    return 1;
}
// Imprimer toute la liste (depuis le debut), LIMITE a L items (L=3)
int printList(Usager* ux)
{
    Usager* p;
    int i=1;
	int L=3;
    char s[10]; // affichage liste limite a L termes, avec L=5
    if (ux==NULL) {
        printf("Liste mal definie\n");
        exit(1);
    }
    p=ux;
    printf("Voici la liste\n");
    while (p!=NULL) {
        // indiquer le numero d'ordre pour chaque usager
        sprintf(s, "Ordre %1d", i); // L=5, => i=1 digit
        printUsager(s, p);
        p=p->next; // aller a l'unite suivante
        i++;
		if (i>L) {
			p=NULL;
			printf("Only the first %d items are shown\n", L);
		}
    };
}

//
//
int setUsager(Usager* ux)
{
    char s[41];
    int  i;
    printf("Rentrer Nom, age\n");
    scanf("%s %d", s, &i);
    printf("nom=%s, age=%d\n", s, i);
    strcpy(ux->nom, s);
    // (*ux). <==> ux->
    ux->age=i;
    //
    ux->next=NULL;
    printUsager("New Setting", ux);
    return 1;
}

int setUsagerP(Usager* ux, char* nom_in, int age_in)
{
    strcpy(ux->nom, nom_in);
    ux->age=age_in;
    ux->next=NULL;
    printUsager("New Setting", ux);
    return 1;
}


//--------------------------

int main(void)
{
//
    printf("Taille de chaque Usager: %d\n", sizeof(Usager));

// creation statique de deux cellules
// puis une liste

 // cree 1ere cellule
    wu = malloc(sizeof(Usager));
    // check
    if (wu==NULL) {
        printf("No enough memory\n");
        exit(1);
    }
	
	// remplissage manuel
	strcpy(wu->nom, "AAA");
    wu->age=34;
	wu->next=NULL;
	
	printUsager("1st example", wu);
	
// memoriser l'emplacement de LA 1ERE cellule
 myList=wu;
	
// creation de la 2nd cellule
 wu = malloc(sizeof(Usager));
    // check
    if (wu==NULL) {
        printf("No enough memory\n");
        exit(1);
    }
	
// remplissage avec function setUsagerP
	setUsagerP(wu, "BBB", 45);
	
// !!!! RATTACHER la 2nde a la 1ere => LISTE
myList->next=wu;

// print la cellule pointee par wu
printUsager("sous wu", wu);

// print la  cellule derrrire myList (2ND cellule))
printUsager("sous mylist next", myList->next);

// impression LISTE
printList(myList);

// destruction (Liberation) de la 2n cellules

free(myList->next); // free 2nd cellule D'ABORD
myList->next=NULL;
printList(myList);


//------------ INSERTION SUPPLEMENTAIRE Interactive -------------------------------------

    
// current = the current last
    currentUsager = myList; // le "curseur" courant s'y positionne
    
// Boucle de saisie
    strcpy(choix, "Saisie"); // initialisation
    while (! (strcmp(choix, "Quit") == 0) ) {
		// create new cell
		wu = malloc(sizeof(Usager));
		// check
		if (wu==NULL) {
			printf("No enough memory\n");
			exit(1);
		} else {
			// ORDRE a RESPECTER
			// rattachement du old current vers new current
			currentUsager->next=wu;
			// le curseur est desormais sur le NEW current
			currentUsager=wu;
		}; // if wu==NULL
        // set content 
        setUsager(currentUsager);
        //fin saisir, next ?
        printf("Continue ? (Quit?) \n");
        scanf("%s", choix);
    }; // while

    // restitution liste
    printList(myList);

    return 1;
}
