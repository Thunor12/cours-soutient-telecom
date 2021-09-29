//
/*
  Usage et effet des arguments de main
  Reprise du 1er programme "minimaliste" en C
*/
//
#include <stdio.h>
//
int main(int argc, char **argv)
{
    char msgfr[]="Bonjour";
    // version de base
    if (argc >1) {
    printf("Le message %s vous a ete presente par %s\n", argv[1], argv[0]);
    }
    else  printf("%s\n", msgfr);
}