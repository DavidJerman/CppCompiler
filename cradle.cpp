#include "cradle.h"
#include <iostream>

int main() {
    std::cout << "Look, it is working!" << std::endl;
    return 0;
}

void getChar() 
{
    Look = getchar();  // Gets a single character from the user I/O
}


void error(char *s)
{
    printf("\nError: %s.", s);
}

void abort(char *s)
{
    error(s);
    exit(1);
}


void expected(char *s)
{
    sprintf(tmp, "%s Expected", s);
    abort(tmp);
}


void match(char x)
{
    if(Look == x) {
        getChar();
    } else {
        sprintf(tmp, "' %c ' ",  x);
        expected(tmp);
    }
}


int isAlpha(char c)
{
    return (UPCASE(c) >= 'A') && (UPCASE(c) <= 'Z');
} 

int isDigit(char c)
{
    return (c >= '0') && (c <= '9');
}


char getName()
{
    char c = Look;

    if( !isAlpha(Look)) {
        sprintf(tmp, "Name");
        expected(tmp);
    }

    getChar();

    return UPCASE(c);
}


char getNum()
{
    char c = Look;

    if( !isDigit(Look)) {
        sprintf(tmp, "Integer");
        expected(tmp);
    }

    getChar();

    return c;
}

void emit(char *s)
{
    printf("\t%s", s);
}

void emitLn(char *s)
{
    emit(s);
    printf("\n");
}

void init()
{
    getChar();
}
