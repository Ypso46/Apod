#include "Cache.h"

void Cache::isThereCache(std::string date) {

    if (date.empty()) {
        std::cout << "Yes there is no date, so take today's date!" << std::endl;
    } else {
        std::cout << "No there is a date, so take it!" << std::endl;
    }
}