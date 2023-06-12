#ifndef APOD_APOD_H
#define APOD_APOD_H

#include <iostream>

class Apod {
public:
    void displayHelp();
    void showApodSpecificDate(std::string &date);
    void showApodDefaultDate();
    bool clearCacheActivated(const std::string &choice);
};


#endif //APOD_APOD_H
