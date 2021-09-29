//  If Else
//
#include <stdio.h>
//
int main(void)
{
    int a=5;
    int b=2;
// if
    if( a < b ) {
        printf("a(%d) < b(%d) \n", a, b);
    }
    else {
        printf("a(%d) >= b(%d) \n", a, b);
    }
    a=2;
    b=5;
    if( a < b ) {
        printf("a(%d) < b(%d) \n", a, b);
    }
    else {
        printf("a(%d) >= b(%d) \n", a, b);
    }
// ------------- Un peu plus complexe
// if ... else emboite
    int note=12;
    char niveau='B';

    if (note>=18) {
        niveau = 'A';
    }
    else if (note>=16) {
        niveau = 'B';
    }
    else if (note>=14) {
        niveau = 'C';
    }
    else if (note>=12) {
        niveau = 'D';
    }
    else if (note>=10) {
        niveau = 'E';
    }
    else  {
        niveau = 'F';
    }

//	combinaison switch
    printf("Note=%d, Niveau=%c, Message: ",  note, niveau);
    switch(niveau) {
    case 'A' :
        printf("Bravo!\n");
        break;
    case 'B' :
    case 'C' :
        printf("Bien!\n" );
        break;
    case 'D' :
        printf("OK.\n" );
        break;
    case 'E' :
        printf("Pourrait mieux faire\n" );
        break;
    default :
        printf("Oops, je n'ai pas prevu ce cas\n" );
    }

//
    return 1;
}
