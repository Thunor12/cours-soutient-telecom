
// ----------------------- 
void setRecord(UserRecord* p, char* nom, int n, double r){
    p->Age = n;
	strcpy(p->Name, nom);
	p->Taille = r;
}  // 

// ------------- Print
void printRecord(UserRecord ur){
   printf("Nom=%s, Age=%3d, Taill =%lf \n", ur.Name, ur.Age,  ur.Taille);
}  //

// ------------- Print
void fprintRecord(FILE* fp, UserRecord ur){
   fprintf(fp, " Nom = %s, Age=%d, Taill =%lf \n", ur.Name, ur.Age,  ur.Taille);
}  //

// Saisie Interactive
int interactiveSetRecord(UserRecord* p) {
    char nom[MAX_NAME_LENGTH];
    int  i;
	double r;
    printf("Rentrer Nom, Age, Taille\n");
    scanf("%s %d %lf", nom, &i, &r);
    printf("nom=%s, Age=%d, Taille=%lf\n", nom, i, r);
    setRecord(p, nom, i, r);
    return 1;
} // set interactive





