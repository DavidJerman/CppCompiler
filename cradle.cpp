#include "cradle.h"

char look;

void getChar()
{
    look = getchar(); // Gets a single character from the user I/O
}

void error(std::string s)
{
    printf("\nError: %s.", s.c_str());
}

void abort(std::string s)
{
    error(s);
    exit(1);
}

void expected(std::string s)
{
    sprintf(tmp, "%s Expected", s.c_str());
    abort(tmp);
}

void match(char x)
{
    if (look == x)
    {
        getChar();
    }
    else
    {
        sprintf(tmp, "' %c ' ", x);
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
    char c = look;

    if (!isAlpha(look))
    {
        sprintf(tmp, "Name");
        expected(tmp);
    }

    getChar();

    return UPCASE(c);
}

char getNum()
{
    char c = look;

    if (!isDigit(look))
    {
        sprintf(tmp, "Integer");
        expected(tmp);
    }

    getChar();

    return c;
}

void emit(std::string s)
{
    sprintf(tmp, "\t%s", s.c_str());
    FW::write(tmp);
}

void emitLn(std::string s)
{
    emit(s);
    FW::write("\n");
}

void init()
{
    getChar();
}
