#include "Cache.h"
#include "Request.h"

namespace fs = std::__fs::filesystem;

void Cache::isThereCache(std::string &URL) {

    std::cout << specificDate() << std::endl;
    std::string nameOfFile = "apod" + specificDate();
    std::string finalURL = URL + specificDate();

    std::ifstream my_fileStream(nameOfFile + ".txt");

    if (fs::exists(nameOfFile + ".txt")) {
        std::cout << "Yes, I have a file with that date!" << std::endl;
        std::ofstream file_out;
        file_out.open(nameOfFile + ".txt", std::ios::out);
    } else {
        std::cout << "Nope, I do not have that date, so I request it now!" << std::endl;
        Request doRequest;
        std::string test = specificDate();
        doRequest.requestCurl(URLMaker(test));
    }
}