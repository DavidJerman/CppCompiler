#include "filewriter.h"

std::string FW::_fileName = "";
FW FW::fileWriter = FW();

void FW::setFileName(std::string fileName)
{
    _fileName = fileName;
}

void FW::write(std::string text, bool append)
{
    std::ofstream stream;
    if (append)
    {
        stream.open(_fileName, std::ios_base::app);
    }
    else
    {
        stream.open(_fileName);
    }

    if (!stream.is_open())
    {
        std::cerr << "Could not open file stream!" << std::endl;
    }
    stream << text;
    stream.close();
}

void FW::writeLn(std::string text, bool append)
{
    FW::write(text + "\n", append);
}
