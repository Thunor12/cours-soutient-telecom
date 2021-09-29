// Un programme avec bug, "=" a la place de "=="
//
#include <stdio.h>
//
int main(void)
{
//
    int ix=1234;
    int iy=0;

    printf("Entry an int (suggestion: 0 or 1):\n");
    scanf("%d", &iy);
    printf("Your input=%d\n", iy);

    int x=ix;
    int y=iy;

// ERREUR MONUMENTALE!
// Au lieu de "==" (egalite dans C), on met "=" (egalite "habituelle")
// Deux effets desastreux
// a) "=" AFFECTE la valeur (x aura celle de y)
// b) le resultat de IF (0 ou pas 0) depend de la valeur de y
    if (x = y) {
        printf("Dans If: Of course x(%d)=y(%d)\n", ix, iy);
        printf("d'ailleurs leur valeurs actuelles sont x=%d, y=%d\n", x, y);
    }
    else {
        printf("Dans Else: Of course x(%d)=y(%d)\n", ix, iy);
        printf("d'ailleurs leur valeurs actuelles sont x=%d, y=%d\n", x, y);
    }
    return 1;
}
