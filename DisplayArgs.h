#ifndef APOD_DISPLAYARGS_H
#define APOD_DISPLAYARGS_H

#include <iostream>
#include "Process.h"

class DisplayArgs: public Process {
public:
    void DisplayHelp();
    void DisplayDate(int argc, char * argv[]);
private:
};


#endif //APOD_DISPLAYARGS_H
