#include <fstream>
#include "SaveJSONIntoTextFile.h"
#include "currentDate.h"
#include <cstdlib>
#include "Apod.h"

namespace fs = std::__fs::filesystem;

void SaveJSONIntoTextFile(std::string &date, std::string &content) {
    std::string nameOfFile;
    std::string finalName = "open " + nameOfFile;

    if (date.empty()) {
        nameOfFile = "apod" + currentDate() + ".txt";
    } else {
        nameOfFile = "apod" + date + ".txt";
    }

    std::ofstream file_out(nameOfFile);
    file_out << content;
    file_out.close();

    std::system(finalName.c_str());
}