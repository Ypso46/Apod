#include "Cache.h"
#include "Request.h"

namespace fs = std::__fs::filesystem;

void Cache::isThereCache(std::string &URL) {

    std::cout << currentDate() << std::endl;
    std::string nameOfFile = "apod" + currentDate();
    std::string finalURL = URL + currentDate();

    std::ifstream my_fileStream(nameOfFile + ".txt");

    if (fs::exists(nameOfFile + ".txt")) {
        std::cout << "Yes, I have a file with that date!" << std::endl;
        std::ofstream file_out;
        file_out.open(nameOfFile + ".txt", std::ios::out);
    } else {
        std::cout << "Nope, I do not have that date, so I request it now!" << std::endl;
        Request doRequest;
        std::string test = currentDate();
        doRequest.requestCurl(URLMaker(test));
    }
}