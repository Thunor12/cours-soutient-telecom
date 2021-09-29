// Ce fichier h est donne a titre d'illustration
// du fait de "include" des *.c, ce *.h n'est pas utilise
// mais, dans une vraie programmation MODULAIRE, c'est par ce biais
// que les fonctions implementees dans un fichier *.c, disons aa.c
// sont indiquees aux autres *.c qui veulent appler des fonctions dans aa.c
//
void setRecord(UserRecord* p, char* nom, int n, double r);

void printRecord(UserRecord* p); 

int interactiveSetRecord(UserRecord* p) ;

