//  Relationnal Operator
//
#include <stdio.h>
//
int main(void)
{
    int a = 5;
    int b = 2;
    int c = 5;

    //
    printf(" (a(%d) > b(%d))  donne %1d, ", a, b, a>b);
    printf(" (a(%d) > c(%d))  donne %1d \n", a, c, a>c);
    printf(" (a(%d) >= b(%d)) donne %1d, ", a, b, a>=b);
    printf(" (a(%d) >= c(%d)) donne %1d \n", a, c, a>=c);
    //
    printf(" (a(%d) < b(%d))  donne %1d, ", a, b, a<b);
    printf(" (a(%d) < c(%d))  donne %1d \n", a, c, a<c);
    printf(" (a(%d) <= b(%d)) donne %1d, ", a, b, a<=b);
    printf(" (a(%d) <= c(%d)) donne %1d \n", a, c, a<=c);
    //
    printf(" (a(%d) == b(%d)) donne %1d, ", a, b, a==b);
    printf(" (a(%d) == c(%d)) donne %1d \n", a, c, a==c);
    printf(" (a(%d) != b(%d)) donne %1d, ", a, b, a!=b);
    printf(" (a(%d) != c(%d)) donne %1d \n", a, c, a!=c);
    // ---------------------------------------------------
    double da = 5.0;
    double db = 2.0;
    double dc = 5.0;
    printf(" (da(%.2f) == c(%d)) donne %1d, ", da, c, da==c);
    printf(" (da(%.2f) == dc(%.2f)) donne %1d\n", da, dc, da==dc);
    printf(" (da(%.2f) != b(%d)) donne %1d, ", da, b, da!=b);
    printf(" (da(%.2f) != dc(%.2f)) donne %1d\n", da, dc, da!=dc);

    return 1;
}
/* --- output
 (a(5) > b(2))  donne 1,  (a(5) > c(5))  donne 0
 (a(5) >= b(2)) donne 1,  (a(5) >= c(5)) donne 1
 (a(5) < b(2))  donne 0,  (a(5) < c(5))  donne 0
 (a(5) <= b(2)) donne 0,  (a(5) <= c(5)) donne 1
 (a(5) == b(2)) donne 0,  (a(5) == c(5)) donne 1
 (a(5) != b(2)) donne 1,  (a(5) != c(5)) donne 0
 (da(5.00) == c(5)) donne 1,  (da(5.00) == dc(5.00)) donne 1
 (da(5.00) != b(2)) donne 1,  (da(5.00) != dc(5.00)) donne 0
*/