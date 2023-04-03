#include "Parser.h"
#include "Request.h"

void Parser::ParserJSON(std::string &URL) {
    Parser::ParserCall(URL);
    //std::cout << "Hello from inheritance class in Parser" << std::endl;
    
}


void Parser::ParserCall(std::string &input) {
    Request toBeParsed;
    toBeParsed.requestCurl(input);

    std::string line;
    std::ifstream myfile ("test.txt");
    if (myfile.is_open()) {
        while (getline (myfile,line)) {
            std::cout << line << std::endl;
        }
        myfile.close();
    } else {
        std::cout << "Unable to open file" << std::endl;
    }

}