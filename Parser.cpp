#include "Parser.h"
#include "Request.h"


void Parser::ParserJSON(std::string &input){
    std::cout << "Hello from inheritance class in Parser" << std::endl;
    Request test;
    test.requestCurl(input);
}