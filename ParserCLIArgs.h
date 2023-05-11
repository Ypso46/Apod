#ifndef APOD_PARSERCLIARGS_H
#define APOD_PARSERCLIARGS_H

#include <iostream>
#include "URLMaker.h"
#include "currentDate.h"


static std::string finalDate;

class ParserCLIArgs {
public:
    void displayDefault(int argc, char * argv[]);
    std::string displayArgs(int argc, char * argv[]);
    void displayHelp();
private:
};


#endif //APOD_PROCESSARGS_H
