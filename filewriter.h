#ifndef _FILEWRITER_H
#define _FILEWRITER_H

#include <string>
#include <iostream>
#include <fstream>

class FW {
public:
    static void setFileName(std::string fileName);
    static void write(std::string text, bool append = true);
    static void writeLn(std::string text, bool append = true);

private:
    static std::string _fileName;
    static FW fileWriter;

    FW() = default;
    ~FW() = default;
};

#endif  // _FILEWRITER_H
