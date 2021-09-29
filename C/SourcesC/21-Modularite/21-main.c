// Modularite: bloc MAIN
//
#include <stdio.h>
// fichier .h
#include "21-myFunc.h"

int main(void)
{
    // Appel myShift
    printf("shift de %d par %d=%d \n", 1, 2, myShift(1, 2));
   return 1;
}
