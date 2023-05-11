#include <iostream>
#include "Cache.h"
#include "URLMaker.h"
#include "ParserCLIArgs.h"


int main(int argc, char *argv[]) {

    //This part handle the CLI arguments
    std::string currentProgramName = argv[0];
    static std::vector<std::string> otherArguments(argv, argv + argc);

    ParserCLIArgs isThereAnArg;
    isThereAnArg.displayDefault(argc, argv);

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