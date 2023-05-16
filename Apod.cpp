#include "Apod.h"
#include "AddQueryStringsToURL.h"
#include "Request.h"

void Apod::displayHelp() {
    std::cout
            << "\n"
            << "You are in the help menu of the APOD software! \n"
            << "Commands            Format          Description \n"
            << "-------             ----            ----------- \n"
            << "-h, --help                          Display the help menu with all possible commands \n"
            << "-d, --date          [yyyy.mm.dd]    Display APOD of the specific date \n"
            << std::endl;
}

void Apod::showApod(std::string &date) {
    std::string URL = AddQueryStringToURL(date);
    Request request;
    request.requestCurl(URL);
}