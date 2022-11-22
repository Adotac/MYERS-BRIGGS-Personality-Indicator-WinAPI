#pragma once


#ifndef BOTHEAD_H
#define BOTHEAD_H


/////////////////////
#define WLEN 4
#define WQUESTIONS {"WHAT", "HOW", "HELP", "EXIT"} 
/////////////////////
#define STARTLEN 4
#define STARTER {"HI", "HELLO", "ANYONE THERE", "ANYBODY THERE"}

#define START_RESPONSE_LEN 3
#define START_RESPONSE {"Hi", "Hello", "How can I help you?"}
/////////////////////
#define WHAT_LEN 2
#define WHATQ {"IS", "ARE" }
#define WHAT_PKEYS {}
/////////////////////
#define HOW_LEN 2
#define HOWQ {"DID YOU KNOW", "CAN YOU TELL"}

typedef enum { GLOBAL, WHAT, HOW, HELP, EXIT } wStatements;


void upperSentence(char S_arr[]);
void lowerSentence(char S_arr[]);


int scanSenetnce(char* input);
int ifStateMatch(char* input, char knowledgeBase[][CHAR_MAX]);

void areWhatKey(char* input);
#endif 
