// variable globale et locale
//
#include <stdio.h>
//

int myInt=2; // Global var

int myTest(int a) // a Function
{
    int myInt; // Local Var (within myTest): SAME identifier myInt
    myInt=a;
    printf("in myTest, myInt =%d given by a(%d) \n", myInt, a);
}

int main(void)
{
//
    printf("Var Global, myInt =%d \n", myInt);
    myTest(222);
    myInt=111;
    printf("Var Global, new myInt =%d \n", myInt);
    myTest(333);
    printf("Var Global, myInt =%d \n", myInt);
//
    return 1;
}
