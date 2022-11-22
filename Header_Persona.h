#pragma once
#define _CRT_SECURE_NO_WARNINGS

#ifndef HEADER_PERSONA_H
#define HEADER_PERSONA_H

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <time.h>
#include <ctype.h>
#include "botHead.h"

#define TRUE 1
#define FALSE 0

#define CNULL '\0'
#define SNULL "\0"

#define MAXQ 50
#define PART1 26
#define PART2 24

/////////////////////
#define Q1 {"When you go somewhere for the day, would you rather","If you were a teacher, would you rather teach","Are you usually","Do you more often let","In doing something that many other people do, would you rather","Among your friends are you","Does the idea of making a list of what you should get done over a weekend","When you have a special job to do, do you like to","Do you tend to have","Do you admire more the people who are","Do you orefer to","Do you usually get along better with","When you are with the group of people, would you usually rather","Is it a higher compliment to be called","In reading for pleasure, do you","Do you","Does following a schedule","When it is settled well in advance tha you will do a certain thing at a certain time, do you find it","Are you more successful","Would you rather be considered","In a large group, do you more often","Do you usually","Would you rather have as a friend","Can the new people you meet tell what you are interested in","In your daily work, do you","Do you usually"}

#define PLITERALS_LEN 8
#define PLITERALS {'E', 'I', 'N', 'S', 'T', 'F', 'J', 'P'}

#define TYPES_LEN 16
#define INTITIAL_TYPES {"INTJ", "INTP", "ENTJ", "ENTP", "INFJ", "INFP", "ENFJ", "ENFP", "ISTJ", "ISFJ", "ESTJ", "ESFJ", "ISTP", "ISFP", "ESTP", "ESFP"}

typedef enum { MALE, FEMALE } GENDER;
typedef enum {
	EXTRA=0, INTRO,
	INTUI, SENS,
	THINK, FEEL,
	JUDGE, PERC
} PERSONALITY;

#define ROLE_SIZE 4
#define STR_ROLE {"ANALYST", "DIPLOMATS", "SENTINELS", "EXPLORERS"}
typedef enum {
	ANALYST, DIPLOMATS, SENTINELS, EXPLORERS
} ROLE;

#define PTYPE_SIZE 16
#define STR_PTYPE {"ARCHITECT", "LOGICIAN", "COMMANDER", "DEBATOR", "ADVOCATE", "MEDIATOR", "PROTAGONIST", "CAMPAIGNER", "LOGISTICIAN", "DEFENDER", "EXECUTIVE", "CONSUL", "VIRTUOSO", "ADVENTURER", "ENTREPRENEUR", "ENTERTAINER"}
typedef enum {
	ARCHITECT=1, LOGICIAN, COMMANDER, DEBATOR, 
	ADVOCATE=5, MEDIATOR, PROTAGONIST, CAMPAIGNER,
	LOGISTICIAN=9, DEFENDER, EXECUTIVE, CONSUL,
	VIRTUOSO=13, ADVENTURER, ENTREPRENEUR, ENTERTAINER
} PTYPE;

typedef struct userInfo uInfo;
struct userInfo {
	char* name;
	GENDER gender;
	PTYPE persona;

	/*--------------M.B.T.I score points--------*/ 
	//Mind:
	int extraverted, introverted;
	//Energy:
	int intuitive, sensing;
	//Nature:
	int thinking, feeling;
	//Tacticts:
	int judging, perceiving;

};

typedef struct TESTS tests;
struct TESTS {
	int index;
	char* question;
	char* choices;
	char user_answer;

	tests* header;
	tests* next;
};

void intitializeTestList(tests** db, uInfo* user);

void pointsMind(tests** db, uInfo* user);
void pointsEnergy(tests** db, uInfo* user);
void pointsNature(tests** db, uInfo* user);
void pointsTactics(tests** db, uInfo* user);

ROLE calculateRole(tests** db, uInfo* user);
PTYPE calculatePersonaType(uInfo* user);
char getLiteral(char* plit, PERSONALITY pp);
void questionTime(tests **db, uInfo* user);

void insertQ(tests** head, int, char* q, char* c);
tests* processAnswer(tests** head, int index, char answer);

int ansValidate(char ans, int ind);
GENDER getGender(char* gen);

void printPersona(ROLE role, uInfo* user);
void printAnalyst();
void printDiplomats();
void printSentinels();
void printExplorers();
void printAnalyst_types(PTYPE type);
void printDiplomat_types(PTYPE type);
void printSentinel_types(PTYPE type);
void printExplorer_types(PTYPE type);
void printAll_types(PTYPE type);
void printAll_Roles(ROLE role);
void printRules_Info(uInfo* user);

int chat_generate(char* input, uInfo*);
void isWhatKey(char* input, uInfo* user);
#endif 
