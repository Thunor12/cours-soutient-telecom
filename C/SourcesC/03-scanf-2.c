/*  Test scanf: Introduction */
//
#include <stdio.h>
// for exit()
#include <stdlib.h>

int main (void)
{
    double myDouble ;
    // int res ;   /*  resultat de scanf */

    printf ("Entry a double\n");

// on peut instancier une var a tout moment
    int res = scanf ("%lf", &myDouble) ;

    // Résultat de l'exécution de scanf
    printf("The return of the function Scanf is %d\n", res) ;

    /*  on verra plus loin pour if */
    if (res != 1)
    {
        printf ("Entry Error\n") ;
        printf ("Non sense value: %e\n", myDouble);
        exit (0) ;  // sortie force\'ee
    }
    /* Normalement un "else", mais comme il y a exit, pas utile ici  */
    printf ("myDouble = %f\n",myDouble) ;

    return 1 ;
}

