#ifndef APOD_PARSER_H
#define APOD_PARSER_H
#include "Request.h"


class Parser {
public:
    Parser();
    void ParserJSON(std::string &input) const;
private:
};


#endif //APOD_PARSER_H
