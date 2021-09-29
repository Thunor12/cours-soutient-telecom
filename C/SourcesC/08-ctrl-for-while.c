//  Ctrl: For, While, Do While
//
#include <stdio.h>
//
int main(void)
{
    int i;
// ----  Un 1er exemple For
    //
    for (i = 0 ; i < 4 ; i++)
    {
        printf ("i = %d\n", i) ;
    }
// ---- Un exemple plus complexe
// a): ici, i est mis a 1000 et on fait "count-down"
// b): C permet la modification de l'index i au sein du bloc
    for (i = 1000 ; i >0  ; i--)
    {
        printf ("i = %d\n", i) ;
        if ( (i<998) && (i>940)) {
            printf("i=%d, pls input new i\n", i);
            // new i, donc reduire OU augmenter le nb de cycles...
            scanf("%d", &i);
            printf(" new value of i=%d\n", i);
        }
    }
    //----------------- While
    // re-invente le for
    // for (i = 0 ; i < 4 ; i++)
    i=0; // initialisation
    while (i<4) {
        printf ("Loop While: i = %d\n", i) ;
        i++;
    }
    // Do while
    i=0;
    do {
        printf ("Loop Do While: i = %d\n", i) ;
        i++;
    }
    while (i<4);
    //
    // un exemple plus complexe
    i=0;
    while ( ! ( (i>2) && (i<10) ) ) {
        printf("Pls input an int within [3, 9]\n");
        scanf("%d", &i);
    }
    printf(" new value of i=%d\n", i);
    // Remarques
    // a) i=0; et While (..) { } peut etre remplace par do {} while ()
    // b) la condition peut s'ecrire avec OR: ((i>9) || (i<3) )

    return 1;
}
