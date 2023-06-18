#include <iostream>
#include <string>

#include "cradle.h"
#include "filewriter.h"

void term()
{
    sprintf(tmp, "mov r8, %c", getNum());
    emitLn(tmp);
}

void expression()
{

    term();
    emitLn("mov r9, r8");
}

void createASMHeader()
{
    FW::write("", false);
    FW::writeLn("global main");
    FW::writeLn("");
    FW::writeLn("section .text");
    FW::writeLn("main:");
}

int main()
{
    FW::setFileName("test.asm");
    createASMHeader();
    init();
    term();
    return 0;
}
