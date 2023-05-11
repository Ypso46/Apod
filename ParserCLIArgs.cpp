#include "ParserCLIArgs.h"

using namespace std::chrono;

void ParserCLIArgs::displayDefault(int argc, char * argv[]) {
    std::cout << "Welcome in APOD" << std::endl;

    if (argc == 1) {
        std::cout << "The current date is: " << currentDate() << std::endl;
    }

    if ( **argv == '-' ) {
        if (argv[1]) {
            switch (*argv[1]) {
                case 'd' :
                    std::cout << "You are in the case d of the switch" << std::endl;
                    break;
                default:
                    std::cout << "You've reach the default case" << std::endl;
                    break;
            }
        }
    }
}

void ParserCLIArgs::displayHelp() {
    std::cout
        << "\n"
        << "You are in the help menu of the APOD software! \n"
        << "Commands            Format          Description \n"
        << "-------             ----            ----------- \n"
        << "-d, --date          [yyyy.mm.dd]    Display APOD of the specific date \n"
    << std::endl;
}

std::string ParserCLIArgs::displayArgs(int argc, char * argv[]) {

    return 0;
}