#include <iostream>
#include "Request.h"

int main() {
    //TODO try to concatenate url and api_key and add them instead of the url line 21
    std::string api_key = "a0NEfSjMIEjyE2avsUmT8DYgl4jZwlpA8GtdGgaW";
    std::string url = "https://api.nasa.gov/planetary/apod?api_key=";



    Request first;
    Request::display();

    return 0;
}