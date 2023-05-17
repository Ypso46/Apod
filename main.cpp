#include <iostream>
#include "ParserCLIArgs.h"
#include "Apod.h"

std::string date;

int main(int argc, char *argv[]) {

    ParserCLIArgs isThereArgs(argc, argv);
    Apod apod;

    if (isThereArgs.cmdOptionExists("-h") || isThereArgs.cmdOptionExists("--help")) {
        apod.displayHelp();
    }

    date = isThereArgs.getCmdOption("-d");
    
    if (!date.empty()) {
        apod.showApodSpecificDate(date);
    } else {
        apod.showApodDefaultDate();
    }

    return 0;
}