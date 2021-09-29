// POINTEUR
//
#include <stdio.h>
//
int main ()
{
    int  i=20;
    int  *ip=NULL; //ip=pointeur sur int
    int* ip2=NULL; // 2nd syntaxe, ip2==pointeur sur int

    // initial values of ip and ip2
    // %p=pointer format
    printf("Pointers reset to NULL(0), ip=%p, ip2=%p\n", ip, ip2);

    // ANCRAGE de ip sur la var i:
    ip=&i; // ip pointe sur i
    printf("Address of i [&i](en hexa): %p, value of ip: %p\n", &i, ip);
    //
    printf("Value of i=%d, and the one given by *ip=  %d\n", i, *ip);
    i++;
    printf("Value of i=%d, and the one given by *ip=  %d [after i++]\n", i, *ip);

    // show the equivalence of the 2 declaration syntax
    int v[5]= {1, 2, 3, 4, 5};
    ip = &v[0];
    ip2= &v[0];
    printf("1st cell of v=%d, value of ip=%p, *ip=%d\n", v[0], ip, *ip);
    printf("1st cell of v=%d, value of ip2=%p, *ip2=%d\n", v[0], ip2, *ip2);

    // Arithmeric of pointers: unit=sizeof(type)
    ip = ip+2; // v[0] to v[2]=3
    printf("3rd cell of v=%d, value of ip=%p, *ip=%d\n [after ip = ip+2]", v[2], ip, *ip);
    //
    return 1;
}
//WARNING:  L'affichage exact DEPEND 
//de la machine ET du systeme d'exploilation
/* output:
Pointers reset to NULL(0), ip=00000000, ip2=00000000
Address of i [&i](en hexa): 0060FE94, value of ip: 0060FE94
Value of i=20, and the one given by *ip=  20
Value of i=21, and the one given by *ip=  21 [after i++]
1st cell of v=1, value of ip=0060FE80, *ip=1
1st cell of v=1, value of ip2=0060FE80, *ip2=1
3rd cell of v=3, value of ip=0060FE88, *ip=3
 [after ip = ip+2]
*/
