#include "currentDate.h"

std::string currentDate() {
    auto t = std::time(nullptr);
    auto tm = *std::localtime(&t);

    std::ostringstream oss;
    oss << std::put_time(&tm, "%Y-%m-%d");
    auto str = oss.str();

    std::cout << str << std::endl;

    return str;
}
