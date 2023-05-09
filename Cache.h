#ifndef APOD_CACHE_H
#define APOD_CACHE_H

#include <iostream>
#include <fstream>
#include <filesystem>
#include "SpecificDate.h"
#include "URLMaker.h"

class Cache {
public:
    static void isThereCache(std::string &date);
};


#endif //APOD_CACHE_H
