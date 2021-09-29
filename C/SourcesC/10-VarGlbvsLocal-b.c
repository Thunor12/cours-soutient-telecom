// variable globale et locale
//
#include <stdio.h>
//
int i=100; // Global var
int k=200; // Global

void test(void) // a Function
{
    int i=10;
 
    for (int i=0; i<2; i++) {
    printf("(function test)  i (loop)=%d \n", i);
    } // N.B. la variable i de la boucle s'evapore a la fin de la boucle

    // C'est la version LOCALE de i qui prevaut
    printf("(function test) i (local) =%d\n", i);
   // Une seule variable repond a l'identifiant "k": la GLOBALE
    printf("(function test) k (global)  =%d\n", k);
//
    for (int j=0; j<2; j++) {
    printf(" j=%d in loop\n", j);
    }
    // l'instruction suivante N'est PAS valide, 
   // car j est declare pour la boucle for (only) 
   // printf(" j of loop is now %d\n", j);
   
   // ici, la var k (globale) est utilisee dans la boucle
    for (k=0; k<2; k++) {
    printf(" (function test) k=%d in loop\n", k);
    }
    // k aura donc une nouvelle valeur 
    printf(" (function test): la variable globale k of loop devient %d\n", k);
}

int main(void)
{
//
int korig=k; // sauvegarder la valeur de k qui sera modifie dans test
    test();
    printf("(main) i (global) =%d\n", i);
    printf("(main) k (global) =%d et n'est plus %d \n", k, korig);
//
    return 1;
}

/*  Resultat d'execution
(function test)  i (loop)=0 
(function test)  i (loop)=1 
(function test) i (local) =10
(function test) k (global)  =200
 j=0 in loop
 j=1 in loop
 (function test) k=0 in loop
 (function test) k=1 in loop
 (function test): la variable globale k of loop devient 2
(main) i (global) =100
(main) k (global) =2 et n'est plus 200 
*/