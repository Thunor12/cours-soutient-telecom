// Operators Arithmetiques
//
#include <stdio.h>
//
int main(void)
{

    int a = 5;
    int b = 2;
    int d = 3;

    // declare c and initialise
    int c = a+b;

    // utiliser une var auxiliaire(c)
    printf("a(%d)+ b(%d) = %d\n", a, b, c);
    // a-b directement, sans passer par c
    printf("a(%d)- b(%d) = %d\n", a, b, a-b);
    //
    printf("a(%d)* b(%d) = %d, ", a, b, a*b);
    printf("a(%d)- b(%d)*d(%d) = %d \n", a, b, d, a-b*d);
    //
    printf("a(%d)/ b(%d) = %d (INTeger result!) \n", a, b, a/b);
    //
    // ============Float===============================
    //
    double xa=5.0;
    double xb=2.0;
    double xd=3.0;
    // INT + Float => Float
    printf("a(%d)/ b(%.2f) = %.2f, ", a, xb, a/xb);
    printf("a(%.2f)- b(%.2f)*d(%.2f) = %.2f \n", xa, xb, xd, xa-xb*xd);

    // Modulo : %% pour print %
    printf("a(%d) %% b(%d) = %d (modulo %d) \n", a, b, a%b, b);
    // NE marcher PAS pour float

    // Cas particulier des: ++, --
    int ia=a, ib=b; // initial a
    printf("initial(a=%d, b=%d): ", ia, ib);
    printf("(a++=%d, a= %d), (b--=%d, b= %d)\n",  a++, a,  b--, b);
    a=ia;
    b=ib; //recovery
    printf("initial(a=%d, b=%d): ", ia, ib);
    printf("(++a=%d, a= %d), (--b=%d, b= %d)\n",  ++a, a, --b, b);
    //
    return 1;
}

/* --- Output
a(5)+ b(2) = 7
a(5)- b(2) = 3
a(5)* b(2) = 10, a(5)- b(2)*d(3) = -1
a(5)/ b(2) = 2 (INTeger result!)
a(5)/ b(2.00) = 2.50, a(5.00)- b(2.00)*d(3.00) = -1.00
a(5) % b(2) = 1 (modulo 2)
initial(a=5, b=2): (a++=5, a= 6), (b--=2, b= 1)
initial(a=5, b=2): (++a=6, a= 6), (--b=1, b= 1)
*/