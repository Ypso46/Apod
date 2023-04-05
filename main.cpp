#include <iostream>
#include "SpecificDate.h"
#include "Cache.h"
#include "URLMaker.h"

int main() {




    // the code bellow is to make a request with a specific date
    std::string date = specificDate();
//    Cache requestDate;
//    Cache::isThereCache(specificDate());
//
//    std::string finalURLWithDate = finalURL + "&date=" + specificDate();
//    std::cout << finalURLWithDate << std::endl;
//    Parser::ParserJSON(finalURLWithDate);

std::string URL = URLMaker(date);

    Cache::isThereCache(URL);


    return 0;
}