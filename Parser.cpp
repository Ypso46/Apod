#include "Parser.h"
#include "Request.h"

void Parser::ParserJSON(std::string &URL) {

    std::ifstream my_fileStream("test.txt");
    RSJresource testToParse(my_fileStream);

    std::ofstream file_out;
    file_out.open("test.txt");

    file_out << testToParse["date"].as<std::string>() << std::endl;
    file_out << testToParse["explanation"].as<std::string>() << std::endl;
    file_out << testToParse["hdurl"].as<std::string>() << std::endl;
    file_out << testToParse["image"].as<std::string>() << std::endl;
    file_out << testToParse["media_type"].as<std::string>() << std::endl;
    file_out << testToParse["service_version"].as<std::string>() << std::endl;
    file_out << testToParse["title"].as<std::string>() << std::endl;
    file_out << testToParse["url"].as<std::string>() << std::endl;

    file_out.close();
}


void Parser::ParserCall(std::string &input) {
    Request toBeParsed;
    toBeParsed.requestCurl(input);

    std::string line;
    std::ifstream myFile ("test.txt");
    if (myFile.is_open()) {
        while (getline (myFile,line)) {
            //std::cout << line << std::endl;
        }
        myFile.close();
    } else {
        std::cout << "Unable to open file" << std::endl;
    }

}