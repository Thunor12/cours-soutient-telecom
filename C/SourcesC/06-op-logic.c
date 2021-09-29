//  Logic Operator
//
#include <stdio.h>
//
int main(void)
{
    int a = 5;
    int b = 2;
    int c = 5;

    //
    printf(" (a(%d)>b(%d))[%d] AND a(%d)>c(%d))[%d] ", a, b, (a>b), a, c, (a>c));
    printf("donne %1d\n", ( (a>b) && (a>c) ));
    printf(" (a(%d)>b(%d))[%d] OR a(%d)>c(%d))[%d] ", a, b, (a>b), a, c, (a>c));
    printf("donne %1d\n", ( (a>b) || (a>c) ));
    printf(" NOT (a(%d) < b(%d))[%1d]  donne %1d\n", a, b, (a<b), !( (a<b) ));

    return 1;
}
/* ---- output
 (a(5)>b(2))[1] AND a(5)>c(5))[0] donne 0
 (a(5)>b(2))[1] OR a(5)>c(5))[0] donne 1
 NOT (a(5) < b(2))[0]  donne 1
*/