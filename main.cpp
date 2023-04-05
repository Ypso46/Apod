#include <iostream>
#include "Request.h"
#include "SpecificDate.h"
#include "Cache.h"

int main() {
    std::string URL = "https://api.nasa.gov/planetary/apod?api_key=";
    std::string finalURL;

    const char* API_KEY = std::getenv("APOD_API_KEY");

    if (API_KEY) {
        finalURL = URL + API_KEY;
    } else {
        std::cout << "You don't have an APOD_API_KEY, please visit: https://api.nasa.gov/ to get one." << std::endl;
        return 1;
    }

    // the code bellow is to make a request with a specific date
    specificDate();
    Cache requestDate;
    requestDate.isThereCache(specificDate());

    std::string finalURLWithDate = finalURL + "&date=" + specificDate();
    std::cout << finalURLWithDate << std::endl;
    Parser::ParserJSON(finalURLWithDate);

    return 0;
}