#include <iostream>
#include <vector>
#include "SpecificDate.h"
#include "Cache.h"
#include "URLMaker.h"
#include "Process.h"
#include "DisplayArgs.h"

int main(int argc, char *argv[]) {

    //This part handle the CLI arguments
    std::string currentProgramName = argv[0];
    std::vector<std::string> otherArguments;

    if (argc <= 1) {
        DisplayArgs help;
        help.DisplayHelp();
    } else {
        Process processArgs;
        processArgs.displayArgs(argc, argv);
    }

    // the code bellow is to make a request with a specific date
    std::string date = specificDate();
    std::cout << "This is the date from main " << date << std::endl;

    std::string URL = URLMaker(date);
    std::cout << "This is the URL from main " << URL << std::endl;

    Cache::isThereCache(URL);

    return 0;
}