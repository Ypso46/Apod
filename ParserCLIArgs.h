#ifndef APOD_PARSERCLIARGS_H
#define APOD_PARSERCLIARGS_H

#include <iostream>
#include "URLMaker.h"
#include "currentDate.h"


static std::string finalDate;

class ParserCLIArgs {
public:
    ParserCLIArgs(int argc, char * argv[]);
    const std::string& getCmdOption(const std::string &option) const;
    bool cmdOptionExists(const std::string &option) const;
    std::string displayArgs(int argc, char * argv[]);
    void displayHelp();
private:
    std::vector<std::string> m_args;
};


#endif //APOD_PROCESSARGS_H
