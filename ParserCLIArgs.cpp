#include "ParserCLIArgs.h"

using namespace std::chrono;

ParserCLIArgs::ParserCLIArgs(int argc, char * argv[]) {
    for (int i=1; i < argc; ++i) {
        m_args.push_back(std::string(argv[i]));
    }




//
//    std::cout << "Welcome in APOD" << std::endl;
//
//    if (argc == 1) {
//        std::cout << "The current date is: " << currentDate() << std::endl;
//    }
//
//    if ( **argv == '-' ) {
//            switch (*argv[1]) {
//                case 'd' :
//                    std::cout << "You are in the case d of the switch" << std::endl;
//                    break;
//                case 'h' :
//                    std::cout << "You are in the case h of the switch" << std::endl;
//                    ParserCLIArgs::displayHelp();
//                    break;
//                default:
//                    std::cout << "You've reach the default case" << std::endl;
//                    break;
//        }
//    }
}

const std::string& ParserCLIArgs::getCmdOption(const std::string &option) const {
    std::vector<std::string>::const_iterator itr;
    itr =  std::find(m_args.begin(), m_args.end(), option);
    if (itr != m_args.end() && ++itr != m_args.end()){
        return *itr;
    }
    static const std::string empty_string("");
    return empty_string;
}

bool ParserCLIArgs::cmdOptionExists(const std::string &option) const {
    return std::find(m_args.begin(), m_args.end(), option)
        != m_args.end();
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
//
//std::string ParserCLIArgs::displayArgs(int argc, char * argv[]) {
//
//    return 0;
//}
