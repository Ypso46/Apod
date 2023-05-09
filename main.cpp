#include <iostream>
#include <vector>
#include "SpecificDate.h"
#include "Cache.h"
#include "URLMaker.h"

int main(int argc, char *argv[]) {

    //part that handle the CLI arguments
    std::cout << "Enter the number of CLI argument you want: " << argc << std::endl;

    std::string currentProgramName = argv[0];
    std::vector<std::string> otherArguments;

    if (argc > 1) {
        otherArguments.assign(argv + 1, argv + argc);
    }

    std::cout << "First argument: " << otherArguments[0] << std::endl;

    

    // the code bellow is to make a request with a specific date
    std::string date = specificDate();

    std::string URL = URLMaker(date);

    Cache::isThereCache(URL);

    return 0;
}