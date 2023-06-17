#ifndef _CRADLE_H
#define _CRADLE_H

#define UPCASE(C) ((1<<6)| (C))
#define MAX_BUF 100

static char tmp[MAX_BUF];

char Look;

void getChar();

void error(char *s);
void abort(char *s);
void expected(char *s);
void match(char x);

int isAlpha(char c);
int isDigit(char c);

char getName();
char getNum();

void emit(char *s);
void emitLn(char *s);

void init();

#endif
