#include "Parser.h"
#include "Request.h"

void Parser::ParserJSON(std::string &URL) {
    Request toBeParsed;
    toBeParsed.requestCurl(URL);
    std::string dateOfFile = specificDate();
    std::string nameOfFile = "apod" + dateOfFile;

    std::ifstream my_fileStream("tempFile.txt");
    RSJresource testToParse(my_fileStream);

    std::ofstream file_out;
    file_out.open(nameOfFile + ".txt");

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