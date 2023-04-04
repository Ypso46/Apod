#ifndef APOD_PARSER_H
#define APOD_PARSER_H

#include <fstream>
#include <iostream>
#include "RSJparser.tcc"
#include "SpecificDate.h"

class Parser {
public:
    static void ParserJSON(std::string &URL);
};


#endif //APOD_PARSER_H
