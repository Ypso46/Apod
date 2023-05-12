#include <iostream>
#include "ParserCLIArgs.h"


int main(int argc, char *argv[]) {

    ParserCLIArgs isThereArgs(argc, argv);

    if (isThereArgs.cmdOptionExists("-h") || isThereArgs.cmdOptionExists("--help")) {
        isThereArgs.displayHelp();
    }

    //TODO see what's this snippet does...
    std::string date = isThereArgs.getCmdOption("-d");
    if (!date.empty()){
        isThereArgs.displayDate(date);
    } else { //if (date.empty())
        isThereArgs.displayHelp();
    }

//    // the code bellow is to make a request with a specific date
//    std::string date = currentDate();
//    std::cout << "This is the date from main " << date << std::endl;
//
//    std::string URL = URLMaker(date);
//    std::cout << "This is the URL from main " << URL << std::endl;
//
//    Cache::isThereCache(URL);

    return 0;
}