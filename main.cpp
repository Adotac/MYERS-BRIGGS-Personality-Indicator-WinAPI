/* 
* References: 
* "https://wedgworthleadership.com/wp-content/uploads/2016/08/Myers-Briggs-Personality-Test.pdf"
* "https://www.16personalities.com/articles/our-theory"	
*/

#include "Header_Persona.h"
#include "botHead.h"

int main(void) {
	int mFlag = FALSE;
	uInfo user;
	tests* qHead = NULL; 
	intitializeTestList(&qHead, &user);
	char* uName = (char*)malloc(sizeof(uName)*1);
	char* uGender = (char*)malloc(sizeof(uName)*1);
	char* input = (char*)malloc(sizeof(input) * 1);

	printf("Welcome to MYERS-BRIGGS Test!\n");
	printf("\nInput your preferred name: "); //gets(uName);
	fgets(uName, sizeof(char)*CHAR_MAX, stdin);
	uName[strcspn(uName, "\n")] = CNULL;
	user.name = uName;
	fflush(stdin);
	printf("\nAre you a MALE(M) or FEMALE(F): ");
	fgets(uGender, sizeof(char) * CHAR_MAX, stdin);
	user.gender = getGender(uGender);

	printf("\n\nReminders %s, there are no wrong answers in this test so please do it phonestly. Thank you.", user.name);
	printf("\nPress any key to continue....");
	_getch(); system("cls");
	questionTime(&qHead, &user); //Display and accept inputs for tests
	
	ROLE rtemp = calculateRole(&qHead, &user); //Calculate points based on rule
	printPersona(rtemp, &user);
	switch (rtemp) {
	case ANALYST:
		printAnalyst_types(user.persona);
		printAnalyst();
		break;
	case DIPLOMATS:
		printDiplomat_types(user.persona);
		printDiplomats();
		break;
	case SENTINELS:
		printSentinel_types(user.persona);
		printSentinels();
		break;
	case EXPLORERS:
		printExplorer_types(user.persona);
		printExplorers();
		break;
	}

	printf("\nPress E to close or Press any key for queries...");
	char ch, e = _getch();
	if (toupper(e) == 'E') {
		return 0;
	}
	/*      ---------Ask query part--------        */
	system("cls");
	printf("\nType 'help' for hints or 'exit' to close the program.\n");
	do {
		while ((ch = getchar()) != '\n' && ch != EOF); //clear buffer

		printf("\n>> ");
		fgets(input, sizeof(char) * CHAR_MAX, stdin);

		mFlag = chat_generate(input, &user);
		_getch();
	} while (mFlag != TRUE);
	
	uName = NULL; free(uName);
	uGender = NULL; free(uGender);
	input = NULL;  free(input);

	return 0;
}

