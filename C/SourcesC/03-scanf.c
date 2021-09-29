/*  Test scanf: Introduction */
//
#include <stdio.h>
//
int main (void)
{
    double myDouble ;

    printf ("Entry a double\n");

    scanf ("%lf", &myDouble);

    printf ("myDouble = %f\n",myDouble);

    return 1 ;
}

