// structure
//
#include <stdio.h>
#include <string.h>
//
struct Usager {
    char    nom[40];
    int     age;
    double  taux;
} u1;

// print Usager
int printUsager(char nvar[], struct Usager ux)
{
    printf("nom var=%s: nom=%s, age=%d, taux=%g\n", nvar, ux.nom, ux.age, ux.taux);
    return 1;
}

//
// *nom <==> nom[]
int setUsager(struct Usager *ux, char *nom, int age, double taux)
{
    strcpy(ux->nom, nom);
    // (*ux). <==> ux->
    (*ux).age=age;
    // de preference ->
    ux->taux=taux;
    return 1;
}

//--------------------------

int main(void)
{
//

//
// struct nom_type var
    struct Usager u2;


//

// --- operation DIRECTE (sans utiliser setUsager)
    strcpy(u1.nom, "DUPOND, Pierre");
    u1.age=45;
    u1.taux=0.56;

// Avec SetUsager (&u2= pointeur sur variable u2)
    setUsager(&u2, "DUPONT, Jean",44, 1.83);
    /* equivaut
            strcpy(u2.nom, "DUPONT, Jean");
    	u2.age=44;
    	u2.taux=1.83;
    */

// impression direct
    printf("u1: nom=%s, age=%d, taux=%g\n", u1.nom, u1.age, u1.taux);
// utilisation de printUsager, avec indication du nom "u2"
    printUsager("u2", u2);


    // definir une liste (tableau) de 2 usagers
    struct Usager ut[2];
    // utilisation de fonction avec pointeur
    struct Usager *p;
    p=&ut[0]; // 1er element
    setUsager(p, "TINTIN", 20, 0.21);
    // Rappel operation pointeur: unite = Data
    p++;
    setUsager(p, "MILOU", 2, 0.1);
    // check
    printUsager("ut0", ut[0]);
    printUsager("ut1", ut[1]);
    return 1;
}
/* --- output
u1: nom=DUPOND, Pierre, age=45, taux=0.56
nom var=u2: nom=DUPONT, Jean, age=44, taux=1.83
nom var=ut0: nom=TINTIN, age=20, taux=0.21
nom var=ut1: nom=MILOU, age=2, taux=0.1
*/