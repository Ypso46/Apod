#include "SpecificDate.h"

std::string specificDate() {
    std::string year;
    std::cout << "Enter a year: " << std::endl;
    std::cin >> year;

    std::string month;
    std::cout << "Enter a month: " << std::endl;
    std::cin >> month;

    std::string day;
    std::cout << "Enter a day: " << std::endl;
    std::cin >> day;

    std::string finalDate = year + '-' + month + '-' + day;
    std::cout << finalDate << std::endl;

    return finalDate;
}