#include "DisplayArgs.h"

DisplayArgs::DisplayArgs() = default;

void DisplayArgs::DisplayHelp() {
    std::cout
    << "You are in the help menu of the APOD software!"
    << "Commands            Args            Description"
    << "-------             ----            -----------"
    << "-d, --date          [yyyy.mm.dd     Display APOD of the specific date"
    << std::endl;
}

void DisplayArgs::DisplayDate(int argc, char **argv) {
    
}