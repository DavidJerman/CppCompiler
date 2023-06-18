#ifndef _CRADLE_H
#define _CRADLE_H

#include "filewriter.h"
#include <iostream>
#include <string>

#define UPCASE(C) ((1<<6)| (C))
#define MAX_BUF 100

static char tmp[MAX_BUF];

void getChar();

void error(std::string s);
void abort(std::string s);
void expected(std::string s);
void match(char x);

int isAlpha(char c);
int isDigit(char c);

char getName();
char getNum();

void emit(std::string s);
void emitLn(std::string s);

void init();

#endif
