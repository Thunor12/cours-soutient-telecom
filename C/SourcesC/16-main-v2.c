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
    if (argc == 1) {
        printf("%s vous dit %s par default\n", argv[0], msgfr);
        printf("usage: %s VOTRE_message\n", argv[0]);
    }
    else {
        printf("le message %s vous a ete presente par %s\n", argv[1], argv[0]);
        if (argc > 2) {
            printf("Vous avez rajoute au moins %s\n", argv[2]);
        }
    }
    return 1;
}
/* output: en supposant que le nom du prg est "myhello"
--a) avec myhello
myhello vous dit Bonjour par default
usage: myhello VOTRE_message
--b) avec myhello Ciao Bye
le message Ciao vous a ete presente par myhello
Vous avez rajoute au moins Bye
*/