#ifndef APOD_CACHE_H
#define APOD_CACHE_H

#include <iostream>
#include <fstream>
#include "SpecificDate.h"
#include "URLMaker.h"
#include <filesystem>

class Cache {
public:
    static void isThereCache(std::string &date);
};


#endif //APOD_CACHE_H
