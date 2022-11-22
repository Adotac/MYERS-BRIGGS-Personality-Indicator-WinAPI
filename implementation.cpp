#include "Header_Persona.h"

void intitializeTestList(tests **db, uInfo *user) {
	(user)->extraverted = 0; (user)->introverted = 0; //initialize to zero all (user) points
	(user)->intuitive = 0; (user)->sensing = 0;
	(user)->thinking = 0; (user)->feeling = 0;
	(user)->judging = 0; (user)->perceiving = 0;

	const char q1[PART1][CHAR_MAX] = Q1;
	//choices for part 1
	const char c1[PART1][CHAR_MAX+1] = {
		//1
		"\nA. Plan what you will do and when.\nB. Just go!!",
		"\nA. Facts-based courses\nB. Courses involving opinion or theory",
		"\nA. A \"GOOD MIXER\" with groups of people.\nB. Rather quiet and reserved.",
		"\nA. Your heart rule your head.\nB. Your head rule your heart.",
		"\nA. Invent a way of your own.\nB. Do it in the accepted way?",
		//5
		"\nA. Full of news about everbody.\nB. One of the last to hear what is going on?",	
		"\nA. Help you.\nB. Stress you.\nC. Positively depress you?", //7
		"\nA. Organize it carefully before you start.\nB. Find out what is necessary as you go along?",
		"\nA. Broad friendships with many different people.\nB. Deep friendship with very few people?",
		"\nA. Normal-acting to never make themselves the center of attention.\nB. That doesn't care if they're the center of attention/not",
		//10
		"\nA. Arrange picnics, parties, or etc. in advance.\nB. Be free to do whatever to looks like fun when the time comes?",
		"\nA. Realistic people\nB. Imaginative people",
		"\nA. Join the talk of the group.\nB. Stand back and listen first.",
		"\nA. A person of real feeling.\nB. A consistently reasonable person.",
		"\nA. Enjoy odd or original ways of saying things.\nB. Like writers to say what they exactly mean.",
		//15
		"\nA. Talk easily to almost anyone for as long as have to.\nB. Talk easily to only certain people under certain conditions.",
		"\nA. Appeal to you.\nB. Cramp you.",
		"\nA. Nice to be able to plan accordingly.\nB. A little unpleasant to be tied down.",
		"\nA. At following a carefully worked out plan.\nB. At dealing with the unexpected and seeing quickly what should be done.",
		"\nA. A practical person.\nB. An out-of-the-box-thinking person.",
		//20
		"\nA. Introduce others.\nB. Get introduced.",
		"\nA. Value emotion more than logic.\nB. Value logic more than feelings.",
		"\nA. Someone who is always coming up with new ideas.\nB. Someone who has both feet on the ground.",
		"\nA. Right away.\nB. Only after they really get to know you.",
		"\nA. Usually plan your work.\nB. Rather enjoy emergency and work against time.\nC. Hate to work under pressure.",
		//25
		"\nA. Show your feelings freely.\nB. Keep your feelings to yourself.",

	};

	//choices for part 2
	const char c2[PART2][CHAR_MAX] = {
		"\nA. SCHEDULED\nB. UNPLANNED", //27
		"\nA. FACTS\nB. IDEAS",
		"\nA. QUIET\nB. HEARTY",
		"\nA. CONVINCING\nB. TOUCHING",
		"\nA. IMAGINATIVE\nB. MATTER-OF-FACT",
		"\nA. BENEFITS\nB. BLESSINGS",
		//32
		"\nA. PEACEMAKER\nB. JUDGE",
		"\nA. SYSTEMATIC\nB. SPONATNEOUS",
		"\nA. STATEMENT\nB. CONCEPT",
		"\nA. RESERVED\nB. TALKATIVE",
		"\nA. ANALYZE\nB. SYMPATHIZE",
		"\nA. CREATE\nB. MAKE",
		//38
		"\nA. DETERMINED\nB. DEVOTED",
		"\nA. GENTLE\nB. FIRM",
		"\nA. SYSTEMATIC\nB. CASUAL",
		"\nA. CERTAINTY\nB. THEORY",
		"\nA. CALM\nB. LIVELY",
		"\nA. JUSTICE\nB. MERCY",
		//44
		"\nA. FASCINATING\nB. SENSIBLE",
		"\nA. FIRM-MINDED\nB. WARM-HEARTED",
		"\nA. FEELING\nB. THINKING",
		"\nA. LITERAL\nB. FIGURATIVE",
		"\nA. ANTICIPATION\nB. COMPASSION",
		"\nA. HARD\nB. SOFT",


	};

	const char* q2 = "Which word appeals to you more?";


	for (int i = 0; i < MAXQ; i++) {
		char* temp = (char*)malloc(sizeof(temp)*CHAR_MAX);
		char* temp2 = (char*)malloc(sizeof(temp)*CHAR_MAX);
		if (i < PART1) {
			sprintf(temp, "%s", q1[i]);
			sprintf(temp2, "%s", c1[i]);
			insertQ(db, i, temp,temp2);

			if (i == 0)
				(*db)->header = *db;
		}
		else {
			sprintf(temp2, "%s", c2[i-PART1]);
			insertQ(db, i, q2, temp2);
		}
	}
}

void pointsMind(tests **db, uInfo *user) {
	tests* temp = *db;
	int mindIndex[] = { 3, 6, 9, 13, 16, 21, 24, 26, 29, 36, 43 };
	int Len = (int)( sizeof(mindIndex)/sizeof(mindIndex[0]) );
	int extra_mindP[] = {2, 2, 2, 1, 2, 2, 1, 1, 2, 2, 1};
	int intro_mindP[] = {2, 1, 1, 2, 2, 2, 1, 0, 2, 1, 1};

	char mindAnswers[] = {
		'A', 'A', 'A',
		'A', 'A', 'A',
		'A','A','B',
		'B', 'B'
	};

	for (int i = 0; i < Len; i++) {
		while (temp != NULL) {
			
			if (temp->index == mindIndex[i] - 1) {
				if (toupper(temp->user_answer) == mindAnswers[i])
					(user->extraverted) += extra_mindP[i];
				else 
					(user->introverted) += intro_mindP[i];

				break;
			}

			temp = temp->next;
		}

		temp = temp->header;
	}
}

void pointsEnergy(tests** db, uInfo* user) {

	int energyIndex[] = { 2, 5, 10, 12, 15, 20, 23, 28, 31, 35, 38, 42, 45, 48 };
	int Len = (int)(sizeof(energyIndex) / sizeof(energyIndex[0]));
	int intui_mindP[] = { 2, 1, 2, 2, 0, 2, 1, 1, 0, 1, 0, 2, 0, 1 };
	int sens_mindP[] = { 2, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 1, 2, 1};

	char energyAnswers[] = {
		'A', 'B',
		'A', 'A', 'B',
		'A','B','A',
		'B', 'A', 'B',
		'A','B','A'

	};

	tests* temp = *db;
	for (int i = 0; i < Len; i++) {
		while (temp != NULL) {

			if (temp->index == energyIndex[i] - 1) {
				if (toupper(temp->user_answer) == energyAnswers[i])
					(user->intuitive) += intui_mindP[i];
				else
					(user->sensing) += sens_mindP[i];

				break;
			}

			temp = temp->next;
		}

		temp = temp->header;
	}

}

void pointsNature(tests** db, uInfo* user) {

	int natureIndex[] = {4, 14, 22, 30, 32, 33, 37, 39, 40, 44, 46, 47, 49, 50};
	int Len = (int)(sizeof(natureIndex) / sizeof(natureIndex[0]));
	int think_mindP[] = { 2, 2, 2, 2, 1, 2, 1, 1, 2, 1, 2, 2, 2, 2 };
	int feel_mindP[] = { 1, 1, 2, 1, 1, 0, 2, 1, 1, 2, 0, 1, 1, 0 };

	char natureAnswers[] = {
		'B', 'B', 'B',
		'A', 'A', 'B',
		'A','A','B',
		'A', 'A', 'B',
		'A','A'
	};

	tests* temp = *db;
	for (int i = 0; i < Len; i++) {
		while (temp != NULL) {

			if (temp->index == natureIndex[i] - 1) {
				if (toupper(temp->user_answer) == natureAnswers[i])
					(user->thinking) += think_mindP[i];
				else
					(user->feeling) += feel_mindP[i];

				break;
			}

			temp = temp->next;
		}

		temp = temp->header;
	}

}

void pointsTactics(tests** db, uInfo* user) {

	int tacticsIndex[] = { 1, 7, 8, 11, 17, 18, 19, 25, 27, 34, 41 };
	int Len = (int)(sizeof(tacticsIndex) / sizeof(tacticsIndex[0]));
	int judge_mindP[] = { 2, 1, 1, 2, 2, 1, 1, 1, 2, 2, 2};
	int perc_mindP[] = { 2, 1, 2, 1, 2, 1, 1, 1, 2, 2, 2};

	char tactAnswers[] = {
		'A', 'A', 'A',
		'A', 'A', 'A',
		'A','A','A',
		'A', 'A'
	};

	tests* temp = *db;
	for (int i = 0; i < Len; i++) {
		while (temp != NULL) {

			if (temp->index == tacticsIndex[i] - 1) {
				if (toupper(temp->user_answer) == tactAnswers[i]) {
					if (tacticsIndex[i] == 25 && toupper(temp->user_answer) == 'C') {
						(user->judging) += 0;
						continue;
					}
					(user->judging) += judge_mindP[i];
				}
				else {
					if (tacticsIndex[i] == 7 && toupper(temp->user_answer) == 'C') {
						(user->perceiving) += 1;
						continue;
					}
					(user->perceiving) += perc_mindP[i];
				}
				break;
			}

			temp = temp->next;
		}

		temp = temp->header;
	}

}

ROLE calculateRole(tests** db, uInfo *user) {
	pointsMind(db, user);
	pointsEnergy(db, user);
	pointsNature(db, user);
	pointsTactics(db, user);
	
	user->persona = calculatePersonaType(user);

	system("cls");
	printf("Thank you for your patience and time for answering the test.\n");
	printf("Here is the analysis of the result:\n");
	switch (user->persona) {
	case ARCHITECT: case LOGICIAN: case COMMANDER: case DEBATOR:
		return ANALYST;
		break;
	case ADVOCATE: case MEDIATOR: case PROTAGONIST: case CAMPAIGNER:
		return DIPLOMATS;
		break;
	case LOGISTICIAN: case DEFENDER: case EXECUTIVE: case CONSUL:
		return SENTINELS;
		break;
	case VIRTUOSO: case ADVENTURER: case ENTREPRENEUR: case ENTERTAINER:
		return EXPLORERS;
		break;
	}
	
}

PTYPE calculatePersonaType(uInfo *user) {
	char plit[] = PLITERALS;
	char strPersona[ROLE_SIZE];

	//1st type------------
	if (user->extraverted <= user->introverted)
		strPersona[0] = getLiteral(plit, INTRO);
	else
		strPersona[0] = getLiteral(plit, EXTRA);
	//2nd-----------------
	if(user->sensing <= user->intuitive)
		strPersona[1] = getLiteral(plit, INTUI);
	else
		strPersona[1] = getLiteral(plit, SENS);
	//3rd---------------
	if (user->thinking == user->feeling) {
		if(user->gender == MALE)
			strPersona[2] = getLiteral(plit, THINK);
		else
			strPersona[2] = getLiteral(plit, FEEL);
	}
	else if(user->thinking < user->feeling)
		strPersona[2] = getLiteral(plit, FEEL);
	else
		strPersona[2] = getLiteral(plit, THINK);
	//4th-----------------
	if(user->judging <= user->perceiving)
		strPersona[3] = getLiteral(plit, PERC);
	else
		strPersona[3] = getLiteral(plit, JUDGE);

	//user->persona = strPersona;
	

	char init_temp[TYPES_LEN][4] = INTITIAL_TYPES;
	for (int i = 0; i < TYPES_LEN; i++) {
		if (strncmp(strPersona, init_temp[i], 4) == 0) {
			return (PTYPE)(i+1);
		}
	}
}

char getLiteral(char *plit, PERSONALITY pp) {
	for (int i = 0; i < PLITERALS_LEN; i++) {
		if ( (int)pp == i) {		
			return plit[i];
		}
	}

	return CNULL;
}

void questionTime(tests **head, uInfo *user) {
	tests *p = NULL, *current = NULL;
	char ctemp = CNULL;
	p = *head;
	while (p != NULL) {

		printf("\n\n%d. %s", p->index+1, p->question);
		printf("\n%s", p->choices);
		printf("\nAnswer: ");
		
		scanf(" %c", &ctemp);
		if (!ansValidate(ctemp, p->index)) {
			printf("\nInvalid Input!");

			printf("\n---------------------------------------------------------");
			_getch();
			fflush(stdin);
			continue;
		}

		*head = processAnswer(head, p->index, ctemp);
		printf("\n---------------------------------------------------------");
		fflush(stdin);
		p = p->next;
	}
}

void insertQ(tests** head, int ind, char* q, char* c) {
	tests *temp, *p = NULL;
	temp = (tests*)malloc(sizeof(tests));

	temp->index = ind;
	temp->question = q;
	temp->choices = c;
	temp->next = NULL;
	
	if (*head == NULL) {
		*head = temp;     //when linked list is empty
	}
	else {
		p = *head;//assign head to p 
		while (p->next != NULL) {
			p = p->next;//traverse the list until p is the last node.The last node always points to NULL.
		}
		temp->header = (*head)->header; //save head address
		p->next = temp;//Point the previous last node to the new node created.
	}
}

tests* processAnswer(tests **head, int index, char answer) {
	tests* tempHead = *head;

	while (tempHead != NULL) {
		if (tempHead->index == index) break; //stop if found!

		tempHead = tempHead->next;
	}

	tempHead->user_answer = answer;
	tempHead = tempHead->header; //return to head address
	return tempHead;
}

int ansValidate(char ans, int ind) {
	switch (toupper(ans))
	{
	case 'A':case 'B':
		return TRUE;
		break;
	
	case 'C':
		if ((ind == 6 || ind == 24) && toupper(ans) == 'C') // question #7 and 25
			return TRUE;
		break;
	}

	return FALSE;
}

GENDER getGender(char* gen) {
	upperSentence(gen);

	if (ifStateMatch(gen, "M"))
		return MALE;
	else
		return FEMALE;
}

//-------------------------------------------------------//
