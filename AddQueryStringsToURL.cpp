#include "AddQueryStringsToURL.h"
#include "currentDate.h"

std::string AddQueryStringToURL(const std::string &date) {
    static std::string finalURL;
    std::string URL = "https://api.nasa.gov/planetary/apod?api_key=";

    const char* API_KEY = std::getenv("APOD_API_KEY");

    if (!date.empty()) {
        finalURL = URL + API_KEY + "&date=" + date;
    } else if (date.empty() && API_KEY) {
        finalURL = URL + API_KEY + "&date=" + currentDate();
    } else {
        std::cout << "You don't have an APOD_API_KEY, please visit: https://api.nasa.gov/ to get one." << std::endl;
        finalURL = (URL + "DEMO_KEY");
    }

    return finalURL;

}
