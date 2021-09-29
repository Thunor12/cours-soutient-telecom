/*  Test scanf: Introduction */
//
#include <stdio.h>
// for exit()
#include <stdlib.h>

int main (void)
{
// déclaration de plusieurs variables
    double ra, rb ;
    int    ia, ib ;
    

    printf ("Entry int1, real1, int2 real2\n");

// saisies MULTIPLES: alignement selon l'ordre et format
// les items se separent par un espace, ou pas (% suffit)
    int res = scanf ("%d %lf %d%lf", &ia, &ra, &ib, &rb) ;

    // Résultat de l'exécution de scanf: en fait: NOMBRE de saisies
    printf("The return of the function Scanf is %d\n", res) ;

    /*  on verra plus loin pour if et !res*/
    if (!res)
    {
        printf ("Entry Error\n") ;
        exit (0) ;  // sortie force\'ee
    }
    /* Normalement un "else", mais comme il y a exit, pas utile ici  */
    printf ("int1=%d, real1=%f, int2=%d real2=%f\n", ia, ra, ib, rb);

    return 1 ;
}

