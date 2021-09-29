// definition constante
#define MAX_NAME_LENGTH 40
#define MAX_LIST_NAME_LENGTH 20
#define MAX_FILE_NAME_LENGTH 80


// un record
typedef struct UserRecord{
	char Name[MAX_NAME_LENGTH];
	int  Age;
	double Taille;
} UserRecord;

// un maillon de liste
typedef struct RecordCell{
	UserRecord Record;
	struct RecordCell* next;
	struct RecordCell* prec;
} RecordCell;

// DEFINIR une autre "structure" descripteur d'une liste
typedef struct ListDescriptor{
	RecordCell* First;
    RecordCell* Last;
	int      nb; // nb d'enregistrement
	char     name[MAX_LIST_NAME_LENGTH];
} ListDescriptor;
