#include <iostream>
#include "ParserCLIArgs.h"
#include "Apod.h"


int main(int argc, char *argv[]) {

    ParserCLIArgs isThereArgs(argc, argv);
    Apod apod;

    if (isThereArgs.cmdOptionExists("-h") || isThereArgs.cmdOptionExists("--help")) {
        apod.displayHelp();
    }


    if (isThereArgs.cmdOptionExists("-d") || isThereArgs.cmdOptionExists("--date")) {
        // CHANGES START HERE
        const char *dateFlagShort = "-d";
        const char *dateFlagLong = "--date";
        const char *dateFlag = isThereArgs.cmdOptionExists("-d") ? dateFlagShort : dateFlagLong;
        // CHANGES END HERE

        std::string date = isThereArgs.getCmdOption(dateFlag);
        apod.showApodSpecificDate(date);

    } else {
        apod.showApodDefaultDate();
    }

    return 0;
}