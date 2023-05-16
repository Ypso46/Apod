#include <fstream>
#include "SaveJSONIntoTextFile.h"
#include "Request.h"
#include "currentDate.h"
#include "Apod.h"

namespace fs = std::__fs::filesystem;

void SaveJSONIntoTextFile(std::string &date, std::string &content) {
    std::string nameOfFile;
    if (date.empty()) {
        nameOfFile = "apod" + currentDate();
    } else {
        nameOfFile = "apod" + date;
    }

    Request request;
    std::ofstream file_out;
    file_out.open(nameOfFile + ".txt", std::ios::out);
    file_out << content;
    file_out.close();
}