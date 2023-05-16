#include "Apod.h"
#include "AddQueryStringsToURL.h"
#include "Request.h"
#include "SaveJSONIntoTextFile.h"
#include "currentDate.h"

void Apod::displayHelp() {
    std::cout
        << "\n"
        << "You are in the help menu of the APOD software! \n"
        << "Commands            Format          Description \n"
        << "-------             ----            ----------- \n"
        << "-h, --help                          Display the help menu with all possible commands \n"
        << "-d, --date          [yyyy-mm-dd]    Display APOD of the specific date \n"
    << std::endl;
}

void Apod::showApodSpecificDate(std::string &date) {
    std::string URL = AddQueryStringToURL(date);
    Request request;
    std::string result = request.requestCurl(URL);
    SaveJSONIntoTextFile(date, result);
}

void Apod::showApodDefaultDate() {
    std::string URL = AddQueryStringToURL(currentDate());
    Request request;
    request.requestCurl(URL);
    std::string result = request.requestCurl(URL);
    std::string datetOfTheDay = currentDate();
    SaveJSONIntoTextFile(datetOfTheDay, result);
}
