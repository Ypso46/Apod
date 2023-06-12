#include <iostream>
#include "ParserCLIArgs.h"
#include "Apod.h"

int main(int argc, char *argv[]) {

    ParserCLIArgs args(argc, argv);
    Apod apod;

    std::string isCacheActivated = args.anyThatExists({ "-cc", "--clear cache" });
    if (! isCacheActivated.empty()) {
        apod.clearCacheActivated("true");
    } else {
        apod.clearCacheActivated("false");
    }

    std::cout << "The cache is activated?" << isCacheActivated << "\n";

    std::string helpFlag = args.anyThatExists({ "-h", "--help", "--aide", "--hilfe" });
    if (! helpFlag.empty()) {
        apod.displayHelp();
        return 0;
    }

    std::string dateFlag = args.anyThatExists({ "-d", "--date" });
    if (dateFlag != "") {
        std::string date = args.getCmdOption(dateFlag);
        apod.showApodSpecificDate(date);
    } else {
        apod.showApodDefaultDate();
    }

    return 0;
}