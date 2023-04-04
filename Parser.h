#ifndef APOD_PARSER_H
#define APOD_PARSER_H

#include <fstream>
#include <iostream>
#include "RSJparser.tcc"

class Parser {
public:
    static void ParserCall(std::string &input);
    static void ParserJSON(std::string &URL);
};


#endif //APOD_PARSER_H
