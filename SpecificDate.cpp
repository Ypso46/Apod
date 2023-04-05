#include "SpecificDate.h"

std::string specificDate() {
    static std::string finalDate;

    if (!finalDate.empty()) {
        return finalDate;
    }

    std::string year;
    std::cout << "Enter a year: " << std::endl;
    std::cin >> year;

    std::string month;
    std::cout << "Enter a month: " << std::endl;
    std::cin >> month;

    std::string day;
    std::cout << "Enter a day: " << std::endl;
    std::cin >> day;

    finalDate = year + '-' + month + '-' + day;
    std::cout << finalDate << std::endl;

    return finalDate;
}

