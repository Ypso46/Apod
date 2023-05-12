#include "ParserCLIArgs.h"

//transform the argv array from a C-type array of strings to a C++ vector of strings
ParserCLIArgs::ParserCLIArgs(int argc, char * argv[]) {
    for (int i = 1; i < argc; ++i) {
        m_args.push_back(std::string(argv[i]));
    }
}

//return the argument after 'option', or the empty string if not found
const std::string& ParserCLIArgs::getCmdOption(const std::string &option) const {
    std::vector<std::string>::const_iterator itr;
    itr = std::find(m_args.begin(),m_args.end(),option);
    if (itr != m_args.end() && ++itr != m_args.end()) {
        return *itr;
    }
    static const std::string empty_string("");
    return empty_string;
}

bool ParserCLIArgs::cmdOptionExists(const std::string &option) const {
    return std::find(m_args.begin(), m_args.end(), option) != m_args.end();
}

void ParserCLIArgs::displayHelp() {
    std::cout
        << "\n"
        << "You are in the help menu of the APOD software! \n"
        << "Commands            Format          Description \n"
        << "-------             ----            ----------- \n"
        << "-h, --help                          Display the help menu with all possible commands \n"
        << "-d, --date          [yyyy.mm.dd]    Display APOD of the specific date \n"
    << std::endl;
}

void ParserCLIArgs::displayDate(std::string &date) {
    //std::string URL = URLMaker(date);
    std::cout << "I'm going to download the APOD of..." << date << std::endl;
}
