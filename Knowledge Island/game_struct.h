#define NUMBER_OF_DISCIPLINES 6
#define NUMBER_OF_HEXES 19

typedef struct _university {
	int ID;
	int KPI;
	int noCampuses, noGO8s;
	int students[NUMBER_OF_DISCIPLINES];
	// stores how many students of each type a university has
	// discipline type code corresponds to index
	// ie. STUDENT_THD stored at students[0] etc.
	
	int exchange[NUMBER_OF_DISCIPLINES];
	// stores whether or not (no = 0, yes = 1) a
	// university has a special exchange rate (2 for 1)
	// discipline type code corresponds to index
	// ie. STUDENT_THD stored at students[0] etc.
	
	int noPatent, noARCs, noPaper;
} university;

typedef struct _game { 
	int discipline[NUMBER_OF_HEXES];
	int dice[NUMBER_OF_HEXES];
	int currentTurn;
	int diceScore;
	university UNI_A;
	university UNI_B;
	university UNI_C;
} game;	
