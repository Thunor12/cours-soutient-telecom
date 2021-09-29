
//  ----- PrintList
void printList(RecordCell* p){
	
if (p==NULL) {
	printf("Liste vide: %p\n", p);
}
else {
while (p!=NULL) {
	printRecord(p->Record);
	p = p->next;
}; // while
} // else 
}  // printList

// fprintList
void fprintList(FILE* fp, RecordCell* p){
	
if (p==NULL) {
	fprintf(fp, "Liste vide: %p\n", p);
}
else {
while (p!=NULL) {
	fprintRecord(fp, p->Record);
	p = p->next;
}; // while
} // else 
}  // fprintList

// initialisation de descripteur
void initListDescriptor(ListDescriptor* ld, char* nom){
	ld->First = NULL;
	ld->Last = NULL;
	ld->nb = 0;
	strcpy(ld->name, nom);
}

// printListFromDescriptor
void printListFromDescriptor(ListDescriptor ld){
	printf("List %s, cell number: %d\n", ld.name, ld.nb);
	printList(ld.First);
}


// --------------------------
void setList(ListDescriptor* ld){
	
// ---------------- Saisie dynamique
char MotArret[30]="aaa";

RecordCell* tmpCell;

do {
//
    tmpCell = malloc(sizeof(RecordCell));
	if (! tmpCell) {
		printf("no space \n");
		exit(1);
	}
	interactiveSetRecord(&tmpCell->Record);
	
	// L'inserer dans la liste
	// 2 cas possible
	ld->nb++;
	if (ld->First == NULL) {
		ld->First = tmpCell; // 1er maillon
	}
	else { // Associer le nouveau  au dernier de la lste courante
        ld->Last->next = tmpCell;
	}
	ld->Last = tmpCell;
	
// STOP??
	printf("Arret: enter Stop, tout autre = continue \n");
	scanf("%s", MotArret);
}
while (strcmp(MotArret, "Stop"));
	
	
} //
