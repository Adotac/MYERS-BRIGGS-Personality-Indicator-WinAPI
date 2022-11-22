#include "Header_Persona.h"

//FUNCTION for strings
void upperSentence(char S_arr[]) {
	int length = strlen(S_arr);

	for (int i = 0; i < length; i++) {
		if (S_arr[i] == ' ' || S_arr[i] == '\0')
			continue;

		S_arr[i] = toupper(S_arr[i]);
	}

}
void lowerSentence(char S_arr[]) {
	int length = strlen(S_arr);

	for (int i = 0; i < length; i++) {
		if (S_arr[i] == ' ' || S_arr[i] == '\0')
			continue;

		S_arr[i] = tolower(S_arr[i]);
	}

}


int chat_generate(char* input, uInfo *user) {
	char starter[][CHAR_MAX] = STARTER;
	char startRespo[START_RESPONSE_LEN][CHAR_MAX] = START_RESPONSE;
	//----------------------------------------------------//
	char whatq[][CHAR_MAX] = WHATQ;
	//----------------------------------------------------//
	char howq[][CHAR_MAX] = HOWQ;
	//----------------------------------------------------//


	int randIndex = 0;

	upperSentence(input);

	switch ((wStatements)scanSenetnce(input)) { //typecasting int into enum value
	case GLOBAL:
		for (int s = 0; s < STARTLEN; s++) {
			if (ifStateMatch(input, starter[s]) ) {
				randIndex = rand() % START_RESPONSE_LEN;
				printf("%s", startRespo[randIndex]);
				return FALSE;
			}
		}
		break;
	case WHAT:
		if (ifStateMatch(input, whatq[0])) { //IS keyword
			isWhatKey(input, user);
			return FALSE;
		}
		else if (ifStateMatch(input, whatq[1])) { //ARE key
			areWhatKey(input);
			return FALSE;
		}
		
		break;
	case HOW:
		if (ifStateMatch(input, howq)) { 
			printRules_Info(user);
			return FALSE;
		}
		break;
	case HELP:
		printf("\nType exit to close the program.");
		printf("\nHere are some sample questions you can ask:");
		printf("\nWhat is an <Personality type here>?");
		printf("\nHow did you know?");
		printf("\nWhat are the personality types?");
		printf("\nWhat are the roles?\n");
		return FALSE;

		break;
	case EXIT:
		printf("\n\nGoodbye....");
		return TRUE;

		break;
	}
	printf("\nWhat is your question?");
}

void isWhatKey(char* input, uInfo *user) {
	char* keyTemp = (char*)malloc(sizeof(keyTemp)*1);
	char pTyper[PTYPE_SIZE][CHAR_MAX] = STR_PTYPE;
	char rTyper[ROLE_SIZE][CHAR_MAX] = STR_ROLE;

	keyTemp = strstr(input, "MY PERSONA");
	if (keyTemp != NULL) {
		printAll_types(user->persona);
	}

	for (int i = 0; i < PTYPE_SIZE; i++) {
		keyTemp = strstr(input, pTyper[i]); //find a subsstring which consist any personality types
		if (keyTemp != NULL) {
			printAll_types((PTYPE)i + 1);
			return;
		}
	}

	for (int j = 0; j < ROLE_SIZE; j++) {
		keyTemp = strstr(input, rTyper[j]); //find a subsstring which consist any role types
		if (keyTemp != NULL) {
			printAll_Roles((ROLE)j);
			return;
		}
	}
}

void areWhatKey(char *input) {
	char* keyTemp = (char*)malloc(sizeof(keyTemp) * 1);
	char ptype[][CHAR_MAX] = STR_PTYPE;
	//----------------------------------------------------//
	char role[][CHAR_MAX] = STR_ROLE;
	//----------------------------------------------------//

	keyTemp = strstr(input, "PERSONA");
	if (keyTemp != NULL) {
		for (int i = 0; i < PTYPE_SIZE; i++) {
			printf("\n- %s", ptype[i]);
			//printf("\n-------------------------------------------------------------------------------------------\n");
		}
	}

	//memset(keyTemp, "\0" , 99);
	keyTemp = strstr(input, "ROLE");
	if (keyTemp != NULL) {
		for (int i = 0; i < ROLE_SIZE; i++) {
			printf("\n- %s", role[i]);
		}
	}

}

int scanSenetnce(char* input) {
	char wQuestions[][CHAR_MAX] = WQUESTIONS;
	char* wTemp = (char*)malloc(sizeof(wTemp) * 1);

	for (int i = 0; i < WLEN; i++) {
		wTemp = strstr(input, wQuestions[i]); //find a subsstring which consist any of W's
		if (wTemp != NULL)
			return i+1; //move one index in consideration for GLOBAL

	}

	return 0; //GLOBAL
}

int ifStateMatch(char* input, char knowledgeBase[CHAR_MAX]) {
	char* wTemp = (char*)malloc(sizeof(wTemp) * 1);

	wTemp = strstr(input, knowledgeBase); //find a subsstring which consist any of W's
	if (wTemp != NULL)
		return TRUE;

	return FALSE;
}
