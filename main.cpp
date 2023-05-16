#include <iostream>
#include "ParserCLIArgs.h"
#include "Apod.h"


int main(int argc, char *argv[]) {

    ParserCLIArgs isThereArgs(argc, argv);
    Apod apod;

    if (isThereArgs.cmdOptionExists("-h") || isThereArgs.cmdOptionExists("--help")) {
        apod.displayHelp();
    }

    std::string date = isThereArgs.getCmdOption("-d");
    if (!date.empty()) {
        apod.showApod(date);
    } else { //if (date.empty())
        apod.displayHelp();
    }

    return 0;
}