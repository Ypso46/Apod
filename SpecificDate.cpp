#include "SpecificDate.h"

std::string specificDate() {
    static std::string finalDate;

    if (!finalDate.empty()) {
        return finalDate;
    }

    std::cout << "Enter a date: " << std::endl;
    std::cin >> finalDate;
    std::cout << finalDate << std::endl;

    return finalDate;
}

