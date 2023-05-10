#include "DisplayArgs.h"

void DisplayArgs::DisplayHelp() {
    std::cout
    << "\n"
    << "You are in the help menu of the APOD software! \n"
    << "Commands            Format          Description \n"
    << "-------             ----            ----------- \n"
    << "-d, --date          [yyyy.mm.dd]    Display APOD of the specific date \n"
    << std::endl;
}

void DisplayArgs::DisplayDate(int argc, char **argv) {

}