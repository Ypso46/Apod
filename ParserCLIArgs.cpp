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

// Return the first option in `options` that exists, otherwise the empty string.
const std::string ParserCLIArgs::anyThatExists(std::initializer_list<const std::string> options) const {
    // return cmdOptionExists(option1) ? option1 : cmdOptionExists(option2) ? option2 : "";
    for (const std::string option : options) {
        if (cmdOptionExists(option)) {
            return option;
        }
    }
    return "";
}