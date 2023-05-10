#include "Process.h"
#include "DisplayArgs.h"


void Process::displayDefault() {
    DisplayArgs help;
    help.DisplayHelp();
}

std::string Process::displayArgs(int argc, char * argv[]) {
    std::cout << "test" << std::endl;
    std::cout << "test2" << std::endl;

    return 0;
}