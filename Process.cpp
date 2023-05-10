#include "Process.h"
#include "DisplayArgs.h"


void Process::displayDefault() {
    DisplayArgs help;
    help.DisplayHelp();
}

std::string Process::displayArgs(int argc, char * argv[]) {
    std::cout << "test" << std::endl;
    return 0;
}