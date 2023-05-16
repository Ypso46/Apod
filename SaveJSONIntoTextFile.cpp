#include <fstream>
#include "SaveJSONIntoTextFile.h"
#include "Request.h"
#include "currentDate.h"
#include "Apod.h"
#include <cstdlib>

namespace fs = std::__fs::filesystem;

void SaveJSONIntoTextFile(std::string &date, std::string &content) {
    std::string nameOfFile;
    if (date.empty()) {
        nameOfFile = "apod" + currentDate();
    } else {
        nameOfFile = "apod" + date;
    }

    std::string finalName = "open " + nameOfFile + ".txt";

    std::ofstream file_out;
    file_out.open(finalName, std::ios::out);
    file_out << content;
    file_out.close();
    
    std::system(finalName.c_str());
}