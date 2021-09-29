// test usage et effet sprintf
// genere dynamiquement un string
// utilise pour modifier format de printf
//
#include <stdio.h>
#include <strings.h>
//
int main(void)
{

    char s[81];
    char msg[81];
    char format[20];
//

    int i=10;
    double x=2.0;
    int l;


// Syntaxe sprintf
    printf("la ligne ci-dessous est produit par printf)\n");
    printf("i=%d, x=%g\n", i, x);
    sprintf(s, "i=%d, x=%g\n", i, x);
    printf("%s(la ligne ci-dessus est produit par printf sprintf)\n", s);

// Affichage avec format dynamique
    while (i<100) {
        printf("donnez <i, l>: imprimer un int (<100) avec la largeur voulue\n");
        // saisie de 2 parametres
        scanf("%d %d", &i, &l);
        printf("Impression de i=%d, sur l=%d\n", i, l);
        // !!! Utilisation de sprint pour obtenir "%<l>d"
        // cad: %% pour avoir "%", %d pour la valeur de l (<l>)
        sprintf(format, "%%%dd\n", l);
        // debut message
        strcpy(msg, "Le voici:");
        // complete par le format
        strcat(msg, format);
// impression de la "regle"
        printf("12345678901234567890123456789012345678901234567890\n");
// impression <=> printf("Le voici:%<l>d\n", i);
        printf(msg, i);
        printf("msg=%s\n", msg);
    }

    return 1;
}
/* --- output
la ligne ci-dessous est produit par printf)
i=10, x=2
i=10, x=2
(la ligne ci-dessus est produit par printf sprintf)
donnez <i, l>: imprimer un int (<100) avec la largeur voulue
Impression de i=12, sur l=3
12345678901234567890123456789012345678901234567890
Le voici: 12
msg=Le voici:%3d

donnez <i, l>: imprimer un int (<100) avec la largeur voulue
Impression de i=12, sur l=6
12345678901234567890123456789012345678901234567890
Le voici:    12
msg=Le voici:%6d

donnez <i, l>: imprimer un int (<100) avec la largeur voulue
Impression de i=120, sur l=8
12345678901234567890123456789012345678901234567890
Le voici:     120
msg=Le voici:%8d
*/